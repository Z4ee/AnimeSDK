#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SharedValue.h"
#include "unitysdk/RPG/GameCore/SharedValueType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }

#define RPG_GAMECORE_SHAREDFLOAT_EQUALS_OFFSET UNITYSDK_OFFSET(0x176EE030)
#define RPG_GAMECORE_SHAREDFLOAT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x176EE080)
#define RPG_GAMECORE_SHAREDFLOAT_METHOD_3_85D22C255258C41D_OFFSET UNITYSDK_OFFSET(0x176EE020)
#define RPG_GAMECORE_SHAREDFLOAT_METHOD_3_CCD85D2FF35B1913_OFFSET UNITYSDK_OFFSET(0x176EDF30)
#define RPG_GAMECORE_SHAREDFLOAT_METHOD_3_D87B231C96B37D4C_OFFSET UNITYSDK_OFFSET(0x176EDEF0)
#define RPG_GAMECORE_SHAREDFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x176EDF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SharedFloat_TypeDefinitionIndex = 16798;

	class SharedFloat : public ::RPG::GameCore::SharedValue
	{
	public:
		::System::Single Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDFLOAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D87B231C96B37D4C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SharedFloat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SharedFloat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDFLOAT_METHOD_3_D87B231C96B37D4C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CCD85D2FF35B1913(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SharedFloat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SharedFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDFLOAT_METHOD_3_CCD85D2FF35B1913_OFFSET))(a1, a2);
		}

		::RPG::GameCore::SharedValueType Method_3_85D22C255258C41D()
		{
			return ((::RPG::GameCore::SharedValueType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDFLOAT_METHOD_3_85D22C255258C41D_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDFLOAT_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDFLOAT_GETHASHCODE_OFFSET))(this);
		}
	};
}
