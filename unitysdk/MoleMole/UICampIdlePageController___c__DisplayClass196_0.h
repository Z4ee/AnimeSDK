#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;

#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS196_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1855EC60)
#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS196_0__REFRESHEXPREWARDNODEINFO_B__0_OFFSET UNITYSDK_OFFSET(0x1855EC70)
#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS196_0__REFRESHEXPREWARDNODEINFO_B__1_OFFSET UNITYSDK_OFFSET(0x1855EDD0)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdlePageController___c__DisplayClass196_0_TypeDefinitionIndex = 75909;

	class UICampIdlePageController___c__DisplayClass196_0 : public ::System::Object
	{
	public:
		::System::Boolean hasTakeNormal; // 0x10
		::System::Boolean isUpAvatar; // 0x11
		::System::Boolean hasTakeUp; // 0x12

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS196_0__CTOR_OFFSET))(this);
		}

		::Class_1_1685EC66FBD28897* _RefreshExpRewardNodeInfo_b__0(::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00 x)
		{
			return ((::Class_1_1685EC66FBD28897*(*)(::PVOID, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS196_0__REFRESHEXPREWARDNODEINFO_B__0_OFFSET))(this, x);
		}

		::Class_1_1685EC66FBD28897* _RefreshExpRewardNodeInfo_b__1(::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00 x)
		{
			return ((::Class_1_1685EC66FBD28897*(*)(::PVOID, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS196_0__REFRESHEXPREWARDNODEINFO_B__1_OFFSET))(this, x);
		}
	};
}
