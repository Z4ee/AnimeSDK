#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SharedValue.h"
#include "unitysdk/RPG/GameCore/SharedValueType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SHAREDSTRINGLIST_EQUALS_OFFSET UNITYSDK_OFFSET(0x19C6E480)
#define RPG_GAMECORE_SHAREDSTRINGLIST_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19C6E570)
#define RPG_GAMECORE_SHAREDSTRINGLIST_METHOD_3_65B45DD5E2F906F9_OFFSET UNITYSDK_OFFSET(0x19C6E320)
#define RPG_GAMECORE_SHAREDSTRINGLIST_METHOD_3_85D22C255258C41D_OFFSET UNITYSDK_OFFSET(0x19C6E470)
#define RPG_GAMECORE_SHAREDSTRINGLIST_METHOD_3_C64B875B0C0F570E_OFFSET UNITYSDK_OFFSET(0x19C6E360)
#define RPG_GAMECORE_SHAREDSTRINGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x19C6E350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SharedStringList_TypeDefinitionIndex = 17402;

	class SharedStringList : public ::RPG::GameCore::SharedValue
	{
	public:
		::Il2CppArray<::System::String*>* Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDSTRINGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_65B45DD5E2F906F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SharedStringList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SharedStringList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDSTRINGLIST_METHOD_3_65B45DD5E2F906F9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C64B875B0C0F570E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SharedStringList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SharedStringList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDSTRINGLIST_METHOD_3_C64B875B0C0F570E_OFFSET))(a1, a2);
		}

		::RPG::GameCore::SharedValueType Method_3_85D22C255258C41D()
		{
			return ((::RPG::GameCore::SharedValueType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDSTRINGLIST_METHOD_3_85D22C255258C41D_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDSTRINGLIST_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDSTRINGLIST_GETHASHCODE_OFFSET))(this);
		}
	};
}
