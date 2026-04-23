#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_A9DE7E08B6C82C6C_1;
class Class_1_D492DB4F73CB089D_Class_1_5B81B8ED269C8D2A;
namespace RPG::GameCore { class TextJoinConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D492DB4F73CB089D_METHOD_1_05F5F71A74353C29_OFFSET UNITYSDK_OFFSET(0x117B8770)
#define CLASS_1_D492DB4F73CB089D_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x117B8520)
#define CLASS_1_D492DB4F73CB089D_METHOD_1_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x117B86C0)
#define CLASS_1_D492DB4F73CB089D_METHOD_1_272681ACB7A37600_OFFSET UNITYSDK_OFFSET(0x117B8110)
#define CLASS_1_D492DB4F73CB089D_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x117B8610)
#define CLASS_1_D492DB4F73CB089D_METHOD_1_B10506507C454711_OFFSET UNITYSDK_OFFSET(0x117B8650)
#define CLASS_1_D492DB4F73CB089D_METHOD_1_D93D2303F1967C64_OFFSET UNITYSDK_OFFSET(0x117B8300)
#define CLASS_1_D492DB4F73CB089D__CTOR_OFFSET UNITYSDK_OFFSET(0x117B8040)
#define CLASS_1_D492DB4F73CB089D__GETTEXTJOINVALUE_B__8_0_OFFSET UNITYSDK_OFFSET(0x117B8810)

inline static constexpr unsigned int Class_1_D492DB4F73CB089D_TypeDefinitionIndex = 68655;

class Class_1_D492DB4F73CB089D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_D492DB4F73CB089D_Class_1_5B81B8ED269C8D2A*>* Field_1_0; // 0x10
	::System::Boolean Field_1_4; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::System::UInt32 Field_1_3; // 0x20
	::RPG::Client::TextID Field_1_1; // 0x28

	::System::Void _ctor(::RPG::GameCore::TextJoinConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TextJoinConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_272681ACB7A37600(::RPG::GameCore::TextJoinConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TextJoinConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D_METHOD_1_272681ACB7A37600_OFFSET))(this, a1);
	}

	::System::String* Method_1_D93D2303F1967C64()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D_METHOD_1_D93D2303F1967C64_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_B10506507C454711(::Class_1_A9DE7E08B6C82C6C_1* a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A9DE7E08B6C82C6C_1*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D_METHOD_1_B10506507C454711_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D_METHOD_1_2372762F4122DEB8_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::UInt32 Method_1_05F5F71A74353C29(::System::Int32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D_METHOD_1_05F5F71A74353C29_OFFSET))(this, a1);
	}

	::System::Boolean _GetTextJoinValue_b__8_0(::Class_1_D492DB4F73CB089D_Class_1_5B81B8ED269C8D2A* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D492DB4F73CB089D_Class_1_5B81B8ED269C8D2A*))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D__GETTEXTJOINVALUE_B__8_0_OFFSET))(this, x);
	}
};
