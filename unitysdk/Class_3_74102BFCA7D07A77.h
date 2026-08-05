#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole::Config { class VOStateAudioPortalCondition; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_74102BFCA7D07A77_METHOD_3_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x14E45A40)
#define CLASS_3_74102BFCA7D07A77_METHOD_3_33C7DC5D66A8BC91_OFFSET UNITYSDK_OFFSET(0x14E46540)
#define CLASS_3_74102BFCA7D07A77_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x14E45FB0)
#define CLASS_3_74102BFCA7D07A77_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x14E46530)
#define CLASS_3_74102BFCA7D07A77_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x14E45FA0)
#define CLASS_3_74102BFCA7D07A77_METHOD_3_A07C8BB3F9FDB5B6_OFFSET UNITYSDK_OFFSET(0x14E45C30)
#define CLASS_3_74102BFCA7D07A77_METHOD_3_FA935EE272CDD4B6_OFFSET UNITYSDK_OFFSET(0x14E45FC0)
#define CLASS_3_74102BFCA7D07A77_METHOD_3_FEB8C90A1F685D6F_OFFSET UNITYSDK_OFFSET(0x14E46050)
#define CLASS_3_74102BFCA7D07A77_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x14E45AB0)
#define CLASS_3_74102BFCA7D07A77_ONENABLE_OFFSET UNITYSDK_OFFSET(0x14E45870)
#define CLASS_3_74102BFCA7D07A77_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x14E45F10)
#define CLASS_3_74102BFCA7D07A77__CTOR_OFFSET UNITYSDK_OFFSET(0x14E45F60)

inline static constexpr unsigned int Class_3_74102BFCA7D07A77_TypeDefinitionIndex = 85547;

class Class_3_74102BFCA7D07A77 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_74102BFCA7D07A77*>
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::VOStateAudioPortalCondition*>* Field_3_1; // 0x20
	::System::String* Field_3_2; // 0x28
	::System::Nullable_1<::System::Boolean> Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74102BFCA7D07A77__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74102BFCA7D07A77_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74102BFCA7D07A77_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74102BFCA7D07A77_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74102BFCA7D07A77_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74102BFCA7D07A77_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_A07C8BB3F9FDB5B6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_74102BFCA7D07A77_METHOD_3_A07C8BB3F9FDB5B6_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_FA935EE272CDD4B6(::System::Int32 a1, ::MoleMole::Config::ValueCompareType a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::Config::ValueCompareType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_74102BFCA7D07A77_METHOD_3_FA935EE272CDD4B6_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74102BFCA7D07A77_METHOD_3_24B05D2E15A5C3C8_OFFSET))(this);
	}

	::System::Boolean Method_3_FEB8C90A1F685D6F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74102BFCA7D07A77_METHOD_3_FEB8C90A1F685D6F_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74102BFCA7D07A77_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Void Method_3_33C7DC5D66A8BC91(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_74102BFCA7D07A77_METHOD_3_33C7DC5D66A8BC91_OFFSET))(this, a1);
	}
};
