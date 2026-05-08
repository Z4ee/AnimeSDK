#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_1FCBF6F207BFD09E;
class Class_1_4F63693E01BB5155;
class Class_1_8C3326BB658EF7C4_Class_1_6A85108CFAA75A6D;
namespace MoleMole::HollowChessboard { class RenderSequenceBase; }
namespace MoleMole::HollowChessboard { class RenderTrackBase; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1E79BD1FA24EE173_METHOD_1_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0xECBB920)
#define CLASS_1_1E79BD1FA24EE173_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xECBB020)
#define CLASS_1_1E79BD1FA24EE173_METHOD_1_1B51EDF8FE2AAC4F_OFFSET UNITYSDK_OFFSET(0xECBB0A0)
#define CLASS_1_1E79BD1FA24EE173_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xECBB910)
#define CLASS_1_1E79BD1FA24EE173_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xECBB4E0)
#define CLASS_1_1E79BD1FA24EE173_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xECBB360)
#define CLASS_1_1E79BD1FA24EE173_METHOD_1_5AFF66468E5869A6_OFFSET UNITYSDK_OFFSET(0xECBB9D0)
#define CLASS_1_1E79BD1FA24EE173_METHOD_1_5E71E7B606E7E450_OFFSET UNITYSDK_OFFSET(0xECBB3B0)
#define CLASS_1_1E79BD1FA24EE173_METHOD_1_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0xECBB530)
#define CLASS_1_1E79BD1FA24EE173_METHOD_1_8A26F63E185CF58D_OFFSET UNITYSDK_OFFSET(0xECBADD0)
#define CLASS_1_1E79BD1FA24EE173_METHOD_1_8A4E7CFB6A3884DD_OFFSET UNITYSDK_OFFSET(0xECBA9C0)
#define CLASS_1_1E79BD1FA24EE173_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0xECBB900)
#define CLASS_1_1E79BD1FA24EE173_METHOD_1_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0xECBAA20)
#define CLASS_1_1E79BD1FA24EE173_METHOD_1_FAFA1904EE32E9CA_OFFSET UNITYSDK_OFFSET(0xECBACA0)
#define CLASS_1_1E79BD1FA24EE173__CCTOR_OFFSET UNITYSDK_OFFSET(0xECBA970)
#define CLASS_1_1E79BD1FA24EE173__CTOR_OFFSET UNITYSDK_OFFSET(0xECBA960)

inline static constexpr unsigned int Class_1_1E79BD1FA24EE173_TypeDefinitionIndex = 55408;

class Class_1_1E79BD1FA24EE173 : public ::System::Object
{
public:
	static ::Class_1_8C3326BB658EF7C4_Class_1_6A85108CFAA75A6D** StaticGet_Field_1_0()
	{
		return (::Class_1_8C3326BB658EF7C4_Class_1_6A85108CFAA75A6D**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E79BD1FA24EE173_TypeDefinitionIndex)->GetStaticField(0x330F0);
	}
	::MoleMole::HollowChessboard::RenderSequenceBase* Field_1_2; // 0x10
	::Class_1_1FCBF6F207BFD09E* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_4F63693E01BB5155*>* Field_1_4; // 0x20
	::Class_1_4F63693E01BB5155* Field_1_3; // 0x28
	::MoleMole::HollowChessboard::RenderDataHandle Field_1_8; // 0x30
	::System::Action* Field_1_6; // 0x40
	::System::Action* Field_1_5; // 0x48
	::System::UInt32 Field_1_9; // 0x50
	::System::Boolean Field_1_7; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E79BD1FA24EE173__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E79BD1FA24EE173__CCTOR_OFFSET))();
	}

	::System::Void Method_1_8A4E7CFB6A3884DD(::System::Action* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1E79BD1FA24EE173_METHOD_1_8A4E7CFB6A3884DD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E79BD1FA24EE173_METHOD_1_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Method_1_8A26F63E185CF58D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1E79BD1FA24EE173_METHOD_1_8A26F63E185CF58D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E79BD1FA24EE173_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_5E71E7B606E7E450(::MoleMole::HollowChessboard::RenderSequenceBase* a1, ::Class_1_1FCBF6F207BFD09E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::RenderSequenceBase*, ::Class_1_1FCBF6F207BFD09E*))((::PBYTE)hIl2Cpp + CLASS_1_1E79BD1FA24EE173_METHOD_1_5E71E7B606E7E450_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E79BD1FA24EE173_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_1B51EDF8FE2AAC4F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1E79BD1FA24EE173_METHOD_1_1B51EDF8FE2AAC4F_OFFSET))(this, a1);
	}

	static ::Class_1_4F63693E01BB5155* Method_1_FAFA1904EE32E9CA(::MoleMole::HollowChessboard::RenderTrackBase* a1, ::Class_1_1FCBF6F207BFD09E* a2)
	{
		return ((::Class_1_4F63693E01BB5155*(*)(::MoleMole::HollowChessboard::RenderTrackBase*, ::Class_1_1FCBF6F207BFD09E*))((::PBYTE)hIl2Cpp + CLASS_1_1E79BD1FA24EE173_METHOD_1_FAFA1904EE32E9CA_OFFSET))(a1, a2);
	}

	::System::Void Method_1_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E79BD1FA24EE173_METHOD_1_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E79BD1FA24EE173_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_1FCBF6F207BFD09E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1FCBF6F207BFD09E*))((::PBYTE)hIl2Cpp + CLASS_1_1E79BD1FA24EE173_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_1FCBF6F207BFD09E* Method_1_24748FC20F375725()
	{
		return ((::Class_1_1FCBF6F207BFD09E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E79BD1FA24EE173_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E79BD1FA24EE173_METHOD_1_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Void Method_1_5AFF66468E5869A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E79BD1FA24EE173_METHOD_1_5AFF66468E5869A6_OFFSET))(this);
	}
};
