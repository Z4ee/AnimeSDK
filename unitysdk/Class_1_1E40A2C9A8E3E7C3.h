#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

class Class_1_18149FBAC001C9F0;
namespace MoleMole { class MonthCardDayReward; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1E40A2C9A8E3E7C3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0xFE20890)
#define CLASS_1_1E40A2C9A8E3E7C3_METHOD_1_37D03196148AC5A0_OFFSET UNITYSDK_OFFSET(0xFE20860)
#define CLASS_1_1E40A2C9A8E3E7C3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0xFE20870)
#define CLASS_1_1E40A2C9A8E3E7C3_METHOD_1_96BA415EF844E765_OFFSET UNITYSDK_OFFSET(0xFE20880)
#define CLASS_1_1E40A2C9A8E3E7C3_METHOD_1_E0EC70C443AE4482_OFFSET UNITYSDK_OFFSET(0xFE20150)
#define CLASS_1_1E40A2C9A8E3E7C3__CTOR_OFFSET UNITYSDK_OFFSET(0xFE1FC50)

inline static constexpr unsigned int Class_1_1E40A2C9A8E3E7C3_TypeDefinitionIndex = 58971;

class Class_1_1E40A2C9A8E3E7C3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::MonthCardDayReward*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_18149FBAC001C9F0*>* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor(::System::DateTime a1, ::System::Collections::Generic::List_1<::Class_1_18149FBAC001C9F0*>* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::DateTime, ::System::Collections::Generic::List_1<::Class_1_18149FBAC001C9F0*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1E40A2C9A8E3E7C3__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_37D03196148AC5A0(::System::Collections::Generic::List_1<::MoleMole::MonthCardDayReward*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::MonthCardDayReward*>*))((::PBYTE)hIl2Cpp + CLASS_1_1E40A2C9A8E3E7C3_METHOD_1_37D03196148AC5A0_OFFSET))(this, a1);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1E40A2C9A8E3E7C3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::MonthCardDayReward*>* Method_1_96BA415EF844E765()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::MonthCardDayReward*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E40A2C9A8E3E7C3_METHOD_1_96BA415EF844E765_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E40A2C9A8E3E7C3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_E0EC70C443AE4482(::System::DateTime a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + CLASS_1_1E40A2C9A8E3E7C3_METHOD_1_E0EC70C443AE4482_OFFSET))(this, a1);
	}
};
