#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferReason.h"
#include "unitysdk/System/Object.h"

class Class_1_0044A3305AC33035_Class_1_7075CD4ADAC35B11;
namespace RPG::Client { class UIManager; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0044A3305AC33035_METHOD_1_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0xA5EFB00)
#define CLASS_1_0044A3305AC33035_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xA5EFA90)
#define CLASS_1_0044A3305AC33035_METHOD_1_45481A3DEE481EEF_OFFSET UNITYSDK_OFFSET(0xA5EF5A0)
#define CLASS_1_0044A3305AC33035_METHOD_1_7FA7EB9208E4EFA8_OFFSET UNITYSDK_OFFSET(0xA5EF520)
#define CLASS_1_0044A3305AC33035_METHOD_1_81B63EC00BDA4B22_OFFSET UNITYSDK_OFFSET(0xA5EF310)
#define CLASS_1_0044A3305AC33035_METHOD_1_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0xA5EED80)
#define CLASS_1_0044A3305AC33035_METHOD_1_8FCF55795874B6E7_OFFSET UNITYSDK_OFFSET(0xA5EF3B0)
#define CLASS_1_0044A3305AC33035_METHOD_1_A61A196E6AD5766D_OFFSET UNITYSDK_OFFSET(0xA5EF770)
#define CLASS_1_0044A3305AC33035_METHOD_1_ABFE6A357B89C69A_OFFSET UNITYSDK_OFFSET(0xA5EF2F0)
#define CLASS_1_0044A3305AC33035_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA5EEBC0)
#define CLASS_1_0044A3305AC33035_METHOD_1_DEAC86EB2AD5D389_OFFSET UNITYSDK_OFFSET(0xA5EEC20)
#define CLASS_1_0044A3305AC33035__CTOR_OFFSET UNITYSDK_OFFSET(0xA5EEB40)

inline static constexpr unsigned int Class_1_0044A3305AC33035_TypeDefinitionIndex = 56794;

class Class_1_0044A3305AC33035 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_0044A3305AC33035_Class_1_7075CD4ADAC35B11*>* Field_1_0; // 0x10
	::RPG::Client::UIManager* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_0044A3305AC33035_Class_1_7075CD4ADAC35B11*>* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28
	::RPG::GameCore::ScreenTransferReason Field_1_4; // 0x2C

	::System::Void _ctor(::RPG::GameCore::ScreenTransferReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + CLASS_1_0044A3305AC33035__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0044A3305AC33035_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0044A3305AC33035_METHOD_1_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Void Method_1_8FCF55795874B6E7(::System::Action* a1, ::System::Func_1<::System::Boolean>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Func_1<::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0044A3305AC33035_METHOD_1_8FCF55795874B6E7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_45481A3DEE481EEF(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4, ::System::Func_1<::System::Boolean>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_0044A3305AC33035_METHOD_1_45481A3DEE481EEF_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_7FA7EB9208E4EFA8(::Class_1_0044A3305AC33035_Class_1_7075CD4ADAC35B11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0044A3305AC33035_Class_1_7075CD4ADAC35B11*))((::PBYTE)hIl2Cpp + CLASS_1_0044A3305AC33035_METHOD_1_7FA7EB9208E4EFA8_OFFSET))(this, a1);
	}

	::System::Void Method_1_A61A196E6AD5766D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0044A3305AC33035_METHOD_1_A61A196E6AD5766D_OFFSET))(this);
	}

	::System::Void Method_1_DEAC86EB2AD5D389()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0044A3305AC33035_METHOD_1_DEAC86EB2AD5D389_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0044A3305AC33035_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_1_81B63EC00BDA4B22(::Class_1_0044A3305AC33035_Class_1_7075CD4ADAC35B11* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0044A3305AC33035_Class_1_7075CD4ADAC35B11*))((::PBYTE)hIl2Cpp + CLASS_1_0044A3305AC33035_METHOD_1_81B63EC00BDA4B22_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_ABFE6A357B89C69A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0044A3305AC33035_METHOD_1_ABFE6A357B89C69A_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0044A3305AC33035_METHOD_1_1808E1CF7A125519_1_OFFSET))(this);
	}
};
