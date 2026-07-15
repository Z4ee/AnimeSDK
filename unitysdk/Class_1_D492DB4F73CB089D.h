#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_D492DB4F73CB089D_Class_1_CB1937A7F4F28031;
class Class_1_F91AD0C5A85E4AFA_34;
namespace RPG::GameCore { class TextJoinConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D492DB4F73CB089D_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x18751B10)
#define CLASS_1_D492DB4F73CB089D_METHOD_1_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x18751CB0)
#define CLASS_1_D492DB4F73CB089D_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18751C00)
#define CLASS_1_D492DB4F73CB089D_METHOD_1_B10506507C454711_OFFSET UNITYSDK_OFFSET(0x18751C40)
#define CLASS_1_D492DB4F73CB089D_METHOD_1_C972CD0BD817D5DA_OFFSET UNITYSDK_OFFSET(0x187516A0)
#define CLASS_1_D492DB4F73CB089D_METHOD_1_C9801CF0D9918144_OFFSET UNITYSDK_OFFSET(0x18751D60)
#define CLASS_1_D492DB4F73CB089D_METHOD_1_D93D2303F1967C64_OFFSET UNITYSDK_OFFSET(0x187518E0)
#define CLASS_1_D492DB4F73CB089D__CTOR_OFFSET UNITYSDK_OFFSET(0x187515D0)
#define CLASS_1_D492DB4F73CB089D__GETTEXTJOINVALUE_B__8_0_OFFSET UNITYSDK_OFFSET(0x18751EE0)

inline static constexpr unsigned int Class_1_D492DB4F73CB089D_TypeDefinitionIndex = 70988;

class Class_1_D492DB4F73CB089D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_D492DB4F73CB089D_Class_1_CB1937A7F4F28031*>* Field_1_0; // 0x10
	::RPG::Client::TextID Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x28
	::System::Boolean Field_1_3; // 0x2C
	::System::UInt32 Field_1_4; // 0x30

	::System::Void _ctor(::RPG::GameCore::TextJoinConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TextJoinConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_C972CD0BD817D5DA(::RPG::GameCore::TextJoinConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TextJoinConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D_METHOD_1_C972CD0BD817D5DA_OFFSET))(this, a1);
	}

	::System::String* Method_1_D93D2303F1967C64()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D_METHOD_1_D93D2303F1967C64_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_B10506507C454711(::Class_1_F91AD0C5A85E4AFA_34* a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_34*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D_METHOD_1_B10506507C454711_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D_METHOD_1_2372762F4122DEB8_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::UInt32 Method_1_C9801CF0D9918144(::System::Int32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D_METHOD_1_C9801CF0D9918144_OFFSET))(this, a1);
	}

	::System::Boolean _GetTextJoinValue_b__8_0(::Class_1_D492DB4F73CB089D_Class_1_CB1937A7F4F28031* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D492DB4F73CB089D_Class_1_CB1937A7F4F28031*))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D__GETTEXTJOINVALUE_B__8_0_OFFSET))(this, a1);
	}
};
