#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1A37120368FD2FC8_1.h"
#include "unitysdk/System/Object.h"

class Class_1_77B1D641ABB6E061;
class Class_2_208CC9941471731A_97;
namespace MoleMole { class UICinemaPlayPageController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AA0F71CEA54B5556_METHOD_1_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0x11A9C1D0)
#define CLASS_1_AA0F71CEA54B5556_METHOD_1_670F9011F4A497FF_OFFSET UNITYSDK_OFFSET(0x11A9C730)
#define CLASS_1_AA0F71CEA54B5556_METHOD_1_81FEFD1B22CE37A2_OFFSET UNITYSDK_OFFSET(0x11A9BBA0)
#define CLASS_1_AA0F71CEA54B5556_METHOD_1_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x11A9C6D0)
#define CLASS_1_AA0F71CEA54B5556_METHOD_1_9C844F31EF7D2A82_OFFSET UNITYSDK_OFFSET(0x11A9CA70)
#define CLASS_1_AA0F71CEA54B5556_METHOD_1_9CD607631367DD7F_OFFSET UNITYSDK_OFFSET(0x11A9C450)
#define CLASS_1_AA0F71CEA54B5556__CTOR_OFFSET UNITYSDK_OFFSET(0x11A9BB90)

inline static constexpr unsigned int Class_1_AA0F71CEA54B5556_TypeDefinitionIndex = 85589;

class Class_1_AA0F71CEA54B5556 : public ::System::Object
{
public:
	::System::Action* Field_1_6; // 0x10
	::Class_2_208CC9941471731A_97* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_77B1D641ABB6E061*>* Field_1_5; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_1A37120368FD2FC8_1>* Field_1_3; // 0x28
	::MoleMole::UICinemaPlayPageController* Field_1_0; // 0x30
	::System::Collections::Generic::List_1<::Struct_2_1A37120368FD2FC8_1>* Field_1_4; // 0x38
	::System::Int32 Field_1_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA0F71CEA54B5556__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_81FEFD1B22CE37A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA0F71CEA54B5556_METHOD_1_81FEFD1B22CE37A2_OFFSET))(this);
	}

	::System::Void Method_1_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA0F71CEA54B5556_METHOD_1_458DAEAB6170C584_OFFSET))(this);
	}

	::System::Void Method_1_9CD607631367DD7F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AA0F71CEA54B5556_METHOD_1_9CD607631367DD7F_OFFSET))(this, a1);
	}

	::System::Void Method_1_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA0F71CEA54B5556_METHOD_1_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Void Method_1_670F9011F4A497FF(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AA0F71CEA54B5556_METHOD_1_670F9011F4A497FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_9C844F31EF7D2A82(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_AA0F71CEA54B5556_METHOD_1_9C844F31EF7D2A82_OFFSET))(this, a1, a2);
	}
};
