#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_07A7649AE602963E_Enum_3_C20BCEF75F9B220F.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_5CFE684023F165BE;
class Class_1_BE94BBD8E05AB4A9;
namespace MoleMole { class UIGalgamePageContext; }
namespace MoleMole { class UIGalgamePageController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_07A7649AE602963E_CLASS_1_A1C2426F417C02E0_METHOD_1_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x1659BB20)
#define CLASS_2_07A7649AE602963E_CLASS_1_A1C2426F417C02E0_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1659BD90)
#define CLASS_2_07A7649AE602963E_CLASS_1_A1C2426F417C02E0_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1659BDA0)
#define CLASS_2_07A7649AE602963E_CLASS_1_A1C2426F417C02E0__CTOR_OFFSET UNITYSDK_OFFSET(0x1659BA60)

inline static constexpr unsigned int Class_2_07A7649AE602963E_Class_1_A1C2426F417C02E0_TypeDefinitionIndex = 44481;

class Class_2_07A7649AE602963E_Class_1_A1C2426F417C02E0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* Field_1_13; // 0x10
	::System::Action* Field_1_15; // 0x18
	::MoleMole::UIGalgamePageController* Field_1_2; // 0x20
	::System::Action_1<::Class_1_5CFE684023F165BE*>* Field_1_8; // 0x28
	::MoleMole::UIGalgamePageContext* Field_1_4; // 0x30
	::System::Action* Field_1_10; // 0x38
	::Foundation::AssetRequestHandle Field_1_14; // 0x40
	::System::String* Field_1_7; // 0x60
	::System::Action* Field_1_9; // 0x68
	::Class_1_BE94BBD8E05AB4A9* Field_1_5; // 0x70
	::System::Int64 Field_1_0; // 0x78
	::Class_2_07A7649AE602963E_Enum_3_C20BCEF75F9B220F Field_1_6; // 0x80
	::System::Boolean Field_1_11; // 0x84
	::System::Int32 Field_1_1; // 0x88

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_07A7649AE602963E_CLASS_1_A1C2426F417C02E0__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07A7649AE602963E_CLASS_1_A1C2426F417C02E0_METHOD_1_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_07A7649AE602963E_CLASS_1_A1C2426F417C02E0_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07A7649AE602963E_CLASS_1_A1C2426F417C02E0_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}
};
