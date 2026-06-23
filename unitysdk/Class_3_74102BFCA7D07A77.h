#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole::Config { class VOStateAudioPortalCondition; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_74102BFCA7D07A77_METHOD_3_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x12D80D10)
#define CLASS_3_74102BFCA7D07A77_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x12D81AB0)
#define CLASS_3_74102BFCA7D07A77_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x12D81AC0)
#define CLASS_3_74102BFCA7D07A77_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x12D81500)
#define CLASS_3_74102BFCA7D07A77_METHOD_3_A07C8BB3F9FDB5B6_OFFSET UNITYSDK_OFFSET(0x12D80F00)
#define CLASS_3_74102BFCA7D07A77_METHOD_3_CAB97EE956AC681D_OFFSET UNITYSDK_OFFSET(0x12D812C0)
#define CLASS_3_74102BFCA7D07A77_METHOD_3_FA935EE272CDD4B6_OFFSET UNITYSDK_OFFSET(0x12D81510)
#define CLASS_3_74102BFCA7D07A77_METHOD_3_FEB8C90A1F685D6F_OFFSET UNITYSDK_OFFSET(0x12D815C0)
#define CLASS_3_74102BFCA7D07A77_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12D80D80)
#define CLASS_3_74102BFCA7D07A77_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12D80B40)
#define CLASS_3_74102BFCA7D07A77_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x12D811E0)
#define CLASS_3_74102BFCA7D07A77__CTOR_OFFSET UNITYSDK_OFFSET(0x12D81230)

inline static constexpr unsigned int Class_3_74102BFCA7D07A77_TypeDefinitionIndex = 64879;

class Class_3_74102BFCA7D07A77 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_74102BFCA7D07A77*>
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::VOStateAudioPortalCondition*>* Field_3_1; // 0x20
	::System::String* Field_3_0; // 0x28
	::System::Nullable_1<::System::Boolean> Field_3_2; // 0x30

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

	::System::Void Method_3_CAB97EE956AC681D(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_74102BFCA7D07A77_METHOD_3_CAB97EE956AC681D_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74102BFCA7D07A77_METHOD_3_832295EC279E5994_OFFSET))(this);
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

	::System::Void Method_3_A07C8BB3F9FDB5B6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_74102BFCA7D07A77_METHOD_3_A07C8BB3F9FDB5B6_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74102BFCA7D07A77_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74102BFCA7D07A77_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}
};
