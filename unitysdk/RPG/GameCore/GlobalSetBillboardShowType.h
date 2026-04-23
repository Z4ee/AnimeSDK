#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GLOBALSETBILLBOARDSHOWTYPE_METHOD_3_0683B15416710FE3_OFFSET UNITYSDK_OFFSET(0x189985D0)
#define RPG_GAMECORE_GLOBALSETBILLBOARDSHOWTYPE_METHOD_3_5E0DEB9676B099DA_OFFSET UNITYSDK_OFFSET(0x18998550)
#define RPG_GAMECORE_GLOBALSETBILLBOARDSHOWTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x189985A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GlobalSetBillboardShowType_TypeDefinitionIndex = 19420;

	class GlobalSetBillboardShowType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::Int32>* BoardShowList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALSETBILLBOARDSHOWTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5E0DEB9676B099DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GlobalSetBillboardShowType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GlobalSetBillboardShowType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALSETBILLBOARDSHOWTYPE_METHOD_3_5E0DEB9676B099DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0683B15416710FE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GlobalSetBillboardShowType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GlobalSetBillboardShowType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALSETBILLBOARDSHOWTYPE_METHOD_3_0683B15416710FE3_OFFSET))(a1, a2);
		}
	};
}
