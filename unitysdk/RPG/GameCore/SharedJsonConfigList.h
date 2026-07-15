#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SharedValue.h"
#include "unitysdk/RPG/GameCore/SharedValueType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicJsonConfig; }

#define RPG_GAMECORE_SHAREDJSONCONFIGLIST_METHOD_3_139A26E62378A0B7_OFFSET UNITYSDK_OFFSET(0x1BE332B0)
#define RPG_GAMECORE_SHAREDJSONCONFIGLIST_METHOD_3_85D22C255258C41D_OFFSET UNITYSDK_OFFSET(0x1BE333C0)
#define RPG_GAMECORE_SHAREDJSONCONFIGLIST_METHOD_3_A99C79153FAE2D80_OFFSET UNITYSDK_OFFSET(0x1BE33270)
#define RPG_GAMECORE_SHAREDJSONCONFIGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE332A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SharedJsonConfigList_TypeDefinitionIndex = 17576;

	class SharedJsonConfigList : public ::RPG::GameCore::SharedValue
	{
	public:
		::Il2CppArray<::RPG::GameCore::DynamicJsonConfig*>* Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDJSONCONFIGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A99C79153FAE2D80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SharedJsonConfigList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SharedJsonConfigList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDJSONCONFIGLIST_METHOD_3_A99C79153FAE2D80_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_139A26E62378A0B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SharedJsonConfigList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SharedJsonConfigList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDJSONCONFIGLIST_METHOD_3_139A26E62378A0B7_OFFSET))(a1, a2);
		}

		::RPG::GameCore::SharedValueType Method_3_85D22C255258C41D()
		{
			return ((::RPG::GameCore::SharedValueType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDJSONCONFIGLIST_METHOD_3_85D22C255258C41D_OFFSET))(this);
		}
	};
}
