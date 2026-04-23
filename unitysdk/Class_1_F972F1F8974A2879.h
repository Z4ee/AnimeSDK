#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferReason.h"
#include "unitysdk/System/Object.h"

class Class_1_F972F1F8974A2879_Class_1_7075CD4ADAC35B11;
namespace RPG::Client { class UIManager; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F972F1F8974A2879_METHOD_1_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x1178AF20)
#define CLASS_1_F972F1F8974A2879_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1178AEB0)
#define CLASS_1_F972F1F8974A2879_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x1178A270)
#define CLASS_1_F972F1F8974A2879_METHOD_1_377EF30C12A3144D_OFFSET UNITYSDK_OFFSET(0x1178A800)
#define CLASS_1_F972F1F8974A2879_METHOD_1_52FEC1E15C23C7B4_OFFSET UNITYSDK_OFFSET(0x1178A890)
#define CLASS_1_F972F1F8974A2879_METHOD_1_7F29568EA964E563_OFFSET UNITYSDK_OFFSET(0x1178A390)
#define CLASS_1_F972F1F8974A2879_METHOD_1_7FA7EB9208E4EFA8_OFFSET UNITYSDK_OFFSET(0x1178A9A0)
#define CLASS_1_F972F1F8974A2879_METHOD_1_A61A196E6AD5766D_OFFSET UNITYSDK_OFFSET(0x1178AB90)
#define CLASS_1_F972F1F8974A2879_METHOD_1_ABFE6A357B89C69A_OFFSET UNITYSDK_OFFSET(0x1178A7E0)
#define CLASS_1_F972F1F8974A2879_METHOD_1_AE264C044347784C_OFFSET UNITYSDK_OFFSET(0x1178AA20)
#define CLASS_1_F972F1F8974A2879_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1178A210)
#define CLASS_1_F972F1F8974A2879__CTOR_OFFSET UNITYSDK_OFFSET(0x1178A190)

inline static constexpr unsigned int Class_1_F972F1F8974A2879_TypeDefinitionIndex = 56032;

class Class_1_F972F1F8974A2879 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_F972F1F8974A2879_Class_1_7075CD4ADAC35B11*>* Field_1_1; // 0x10
	::RPG::Client::UIManager* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::Class_1_F972F1F8974A2879_Class_1_7075CD4ADAC35B11*>* Field_1_2; // 0x20
	::RPG::GameCore::ScreenTransferReason Field_1_0; // 0x28
	::System::Boolean Field_1_4; // 0x2C

	::System::Void _ctor(::RPG::GameCore::ScreenTransferReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + CLASS_1_F972F1F8974A2879__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F972F1F8974A2879_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_7F29568EA964E563()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F972F1F8974A2879_METHOD_1_7F29568EA964E563_OFFSET))(this);
	}

	::System::Void Method_1_52FEC1E15C23C7B4(::System::Action* a1, ::System::Func_1<::System::Boolean>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Func_1<::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F972F1F8974A2879_METHOD_1_52FEC1E15C23C7B4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_AE264C044347784C(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4, ::System::Func_1<::System::Boolean>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_F972F1F8974A2879_METHOD_1_AE264C044347784C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_7FA7EB9208E4EFA8(::Class_1_F972F1F8974A2879_Class_1_7075CD4ADAC35B11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F972F1F8974A2879_Class_1_7075CD4ADAC35B11*))((::PBYTE)hIl2Cpp + CLASS_1_F972F1F8974A2879_METHOD_1_7FA7EB9208E4EFA8_OFFSET))(this, a1);
	}

	::System::Void Method_1_A61A196E6AD5766D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F972F1F8974A2879_METHOD_1_A61A196E6AD5766D_OFFSET))(this);
	}

	::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F972F1F8974A2879_METHOD_1_18982EFD3B740683_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F972F1F8974A2879_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_1_377EF30C12A3144D(::Class_1_F972F1F8974A2879_Class_1_7075CD4ADAC35B11* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F972F1F8974A2879_Class_1_7075CD4ADAC35B11*))((::PBYTE)hIl2Cpp + CLASS_1_F972F1F8974A2879_METHOD_1_377EF30C12A3144D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_ABFE6A357B89C69A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F972F1F8974A2879_METHOD_1_ABFE6A357B89C69A_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F972F1F8974A2879_METHOD_1_1808E1CF7A125519_1_OFFSET))(this);
	}
};
