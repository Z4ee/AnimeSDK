#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3DE15EA7F53A0550.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_ADBE1843AD1E672A;
class Class_3_79E0DC8295557BAC;

#define CLASS_3_8C8BEF837E67B451_GET_ONBTNTABCLICK_OFFSET UNITYSDK_OFFSET(0x1096E6D0)
#define CLASS_3_8C8BEF837E67B451_GET_TABINDEX_OFFSET UNITYSDK_OFFSET(0x1096E6C0)
#define CLASS_3_8C8BEF837E67B451_GET_TITLETEXTID_OFFSET UNITYSDK_OFFSET(0x1096E6B0)
#define CLASS_3_8C8BEF837E67B451_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1096E6E0)
#define CLASS_3_8C8BEF837E67B451__CTOR_OFFSET UNITYSDK_OFFSET(0x1096E600)
#define CLASS_3_8C8BEF837E67B451___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1096E740)

inline static constexpr unsigned int Class_3_8C8BEF837E67B451_TypeDefinitionIndex = 60950;

class Class_3_8C8BEF837E67B451 : public ::Class_2_3DE15EA7F53A0550
{
public:
	::Class_1_ADBE1843AD1E672A* _OnBtnTabClick_k__BackingField; // 0x18
	::Class_3_79E0DC8295557BAC* Field_3_3; // 0x20
	::System::Int32 _TabIndex_k__BackingField; // 0x28
	::RPG::Client::TextID _TitleTextID_k__BackingField; // 0x30

	::System::Void _ctor(::RPG::Client::TextID a1, ::System::Int32 a2, ::Class_3_79E0DC8295557BAC* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::Int32, ::Class_3_79E0DC8295557BAC*))((::PBYTE)hIl2Cpp + CLASS_3_8C8BEF837E67B451__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::TextID get_TitleTextID()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C8BEF837E67B451_GET_TITLETEXTID_OFFSET))(this);
	}

	::System::Int32 get_TabIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C8BEF837E67B451_GET_TABINDEX_OFFSET))(this);
	}

	::Class_1_ADBE1843AD1E672A* get_OnBtnTabClick()
	{
		return ((::Class_1_ADBE1843AD1E672A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C8BEF837E67B451_GET_ONBTNTABCLICK_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C8BEF837E67B451_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void __ctor_b__0_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C8BEF837E67B451___CTOR_B__0_0_OFFSET))(this);
	}
};
