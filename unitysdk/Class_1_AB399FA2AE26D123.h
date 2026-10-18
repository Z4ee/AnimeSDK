#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EMatchAIState.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

class Class_1_AB399FA2AE26D123_Class_1_23C3A870D4A107AE;
class Class_2_230F5EDDB35DAEBA;
class Class_3_CD59F26A5F0E803D;
namespace SimpleJSON { class JSONClass; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::IO { class StreamWriter; }

#define CLASS_1_AB399FA2AE26D123_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB17E5B0)
#define CLASS_1_AB399FA2AE26D123_GET_ENABLERECORD_OFFSET UNITYSDK_OFFSET(0xB17D380)
#define CLASS_1_AB399FA2AE26D123_METHOD_1_05390FBCD5C7941E_OFFSET UNITYSDK_OFFSET(0xB181B60)
#define CLASS_1_AB399FA2AE26D123_METHOD_1_0660E9F71BF593F2_OFFSET UNITYSDK_OFFSET(0xB1809F0)
#define CLASS_1_AB399FA2AE26D123_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xB17E4A0)
#define CLASS_1_AB399FA2AE26D123_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0xB17D3C0)
#define CLASS_1_AB399FA2AE26D123_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xB17D3B0)
#define CLASS_1_AB399FA2AE26D123_METHOD_1_1DCEF572AAED75CF_OFFSET UNITYSDK_OFFSET(0xB17DE40)
#define CLASS_1_AB399FA2AE26D123_METHOD_1_2342412B8A685238_OFFSET UNITYSDK_OFFSET(0xB1814C0)
#define CLASS_1_AB399FA2AE26D123_METHOD_1_27AA6E401CA6C839_OFFSET UNITYSDK_OFFSET(0xB17F980)
#define CLASS_1_AB399FA2AE26D123_METHOD_1_39E0514BBEEF7996_OFFSET UNITYSDK_OFFSET(0xB17E620)
#define CLASS_1_AB399FA2AE26D123_METHOD_1_60EE8201F04C24EE_OFFSET UNITYSDK_OFFSET(0xB180570)
#define CLASS_1_AB399FA2AE26D123_METHOD_1_774EE852FA58F327_OFFSET UNITYSDK_OFFSET(0xB180FF0)
#define CLASS_1_AB399FA2AE26D123_METHOD_1_87AFEA95A4C36D08_OFFSET UNITYSDK_OFFSET(0xB183510)
#define CLASS_1_AB399FA2AE26D123_METHOD_1_93678C9950F92204_OFFSET UNITYSDK_OFFSET(0xB181E30)
#define CLASS_1_AB399FA2AE26D123_METHOD_1_97CD3501BC2A9FF5_OFFSET UNITYSDK_OFFSET(0xB17E030)
#define CLASS_1_AB399FA2AE26D123_METHOD_1_9F097181242445DC_OFFSET UNITYSDK_OFFSET(0xB183240)
#define CLASS_1_AB399FA2AE26D123_METHOD_1_A8AF94CF9C6D680B_OFFSET UNITYSDK_OFFSET(0xB1802D0)
#define CLASS_1_AB399FA2AE26D123_METHOD_1_AEF085E6C83B79B3_OFFSET UNITYSDK_OFFSET(0xB17E210)
#define CLASS_1_AB399FA2AE26D123_METHOD_1_B04E0A69730C6DB6_OFFSET UNITYSDK_OFFSET(0xB17E270)
#define CLASS_1_AB399FA2AE26D123_METHOD_1_BAB81EA7F3EE452F_OFFSET UNITYSDK_OFFSET(0xB1832D0)
#define CLASS_1_AB399FA2AE26D123_METHOD_1_CB65494BE8E630D4_OFFSET UNITYSDK_OFFSET(0xB17D3D0)
#define CLASS_1_AB399FA2AE26D123_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xB17E1B0)
#define CLASS_1_AB399FA2AE26D123_METHOD_1_EA17AD3270492366_OFFSET UNITYSDK_OFFSET(0xB181860)
#define CLASS_1_AB399FA2AE26D123_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB17D3A0)
#define CLASS_1_AB399FA2AE26D123_METHOD_1_FDA8A3C86BB49161_OFFSET UNITYSDK_OFFSET(0xB181110)
#define CLASS_1_AB399FA2AE26D123_SET_ENABLERECORD_OFFSET UNITYSDK_OFFSET(0xB17D390)
#define CLASS_1_AB399FA2AE26D123__CTOR_OFFSET UNITYSDK_OFFSET(0xB183AC0)

inline static constexpr unsigned int Class_1_AB399FA2AE26D123_TypeDefinitionIndex = 75903;

class Class_1_AB399FA2AE26D123 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet__EnableRecord_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AB399FA2AE26D123_TypeDefinitionIndex)->GetStaticField(0x15530);
	}
	// static const ::System::Single JPKMKANAOME; // 0x0
	::System::String* GGEEKEAKFHN; // 0x10
	::Class_3_CD59F26A5F0E803D* PDENFEFCAGN; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_AB399FA2AE26D123_Class_1_23C3A870D4A107AE*>* BDHACHIBADJ; // 0x20
	::System::String* HOFHPAAFMMG; // 0x28
	::System::IO::StreamWriter* LBLHMBNGKEO; // 0x30
	::System::Boolean AMDJLAFJKFA; // 0x38
	::System::Boolean KLMAEPMHPCE; // 0x39
	::System::DateTime DICDBJFGOIF; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB399FA2AE26D123__CTOR_OFFSET))(this);
	}

	static ::System::Boolean get_EnableRecord()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_AB399FA2AE26D123_GET_ENABLERECORD_OFFSET))();
	}

	static ::System::Void set_EnableRecord(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AB399FA2AE26D123_SET_ENABLERECORD_OFFSET))(a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB399FA2AE26D123_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB399FA2AE26D123_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB399FA2AE26D123_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_CB65494BE8E630D4(::Class_3_CD59F26A5F0E803D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_CD59F26A5F0E803D*))((::PBYTE)hIl2Cpp + CLASS_1_AB399FA2AE26D123_METHOD_1_CB65494BE8E630D4_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB399FA2AE26D123_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1DCEF572AAED75CF(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AB399FA2AE26D123_METHOD_1_1DCEF572AAED75CF_OFFSET))(this, a1);
	}

	::System::Void Method_1_27AA6E401CA6C839(::Class_2_230F5EDDB35DAEBA* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB399FA2AE26D123_METHOD_1_27AA6E401CA6C839_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Void Method_1_0660E9F71BF593F2(::Class_2_230F5EDDB35DAEBA* a1, ::RPG::GameCore::EMatchAIState a2, ::RPG::GameCore::EMatchAIState a3, ::System::String* a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::RPG::GameCore::EMatchAIState, ::RPG::GameCore::EMatchAIState, ::System::String*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB399FA2AE26D123_METHOD_1_0660E9F71BF593F2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_FDA8A3C86BB49161(::Class_2_230F5EDDB35DAEBA* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB399FA2AE26D123_METHOD_1_FDA8A3C86BB49161_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_2342412B8A685238(::Class_2_230F5EDDB35DAEBA* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AB399FA2AE26D123_METHOD_1_2342412B8A685238_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_EA17AD3270492366(::Class_2_230F5EDDB35DAEBA* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB399FA2AE26D123_METHOD_1_EA17AD3270492366_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_05390FBCD5C7941E(::Class_2_230F5EDDB35DAEBA* a1, ::System::String* a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB399FA2AE26D123_METHOD_1_05390FBCD5C7941E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_93678C9950F92204(::System::Single a1, ::Class_2_230F5EDDB35DAEBA* a2, ::Class_2_230F5EDDB35DAEBA* a3, ::RPG::GameCore::EMatchAIState a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11, ::System::Single a12, ::System::Boolean a13, ::System::Single a14, ::System::Boolean a15, ::System::Single a16, ::System::Boolean a17, ::System::Single a18, ::System::Boolean a19, ::System::Single a20, ::System::Single a21, ::System::Single a22)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Class_2_230F5EDDB35DAEBA*, ::Class_2_230F5EDDB35DAEBA*, ::RPG::GameCore::EMatchAIState, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB399FA2AE26D123_METHOD_1_93678C9950F92204_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22);
	}

	::System::Void Method_1_BAB81EA7F3EE452F(::Class_2_230F5EDDB35DAEBA* a1, ::Class_1_AB399FA2AE26D123_Class_1_23C3A870D4A107AE* a2, ::RPG::GameCore::EMatchAIState a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::Class_1_AB399FA2AE26D123_Class_1_23C3A870D4A107AE*, ::RPG::GameCore::EMatchAIState, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB399FA2AE26D123_METHOD_1_BAB81EA7F3EE452F_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_87AFEA95A4C36D08(::Class_2_230F5EDDB35DAEBA* a1, ::Class_1_AB399FA2AE26D123_Class_1_23C3A870D4A107AE* a2, ::System::String* a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::Class_1_AB399FA2AE26D123_Class_1_23C3A870D4A107AE*, ::System::String*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB399FA2AE26D123_METHOD_1_87AFEA95A4C36D08_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::SimpleJSON::JSONClass* Method_1_39E0514BBEEF7996(::System::String* a1)
	{
		return ((::SimpleJSON::JSONClass*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AB399FA2AE26D123_METHOD_1_39E0514BBEEF7996_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONClass* Method_1_60EE8201F04C24EE(::System::String* a1, ::Class_2_230F5EDDB35DAEBA* a2)
	{
		return ((::SimpleJSON::JSONClass*(*)(::PVOID, ::System::String*, ::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + CLASS_1_AB399FA2AE26D123_METHOD_1_60EE8201F04C24EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B04E0A69730C6DB6(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_AB399FA2AE26D123_METHOD_1_B04E0A69730C6DB6_OFFSET))(this, a1);
	}

	::Class_1_AB399FA2AE26D123_Class_1_23C3A870D4A107AE* Method_1_A8AF94CF9C6D680B(::Class_2_230F5EDDB35DAEBA* a1)
	{
		return ((::Class_1_AB399FA2AE26D123_Class_1_23C3A870D4A107AE*(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + CLASS_1_AB399FA2AE26D123_METHOD_1_A8AF94CF9C6D680B_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F097181242445DC(::Class_1_AB399FA2AE26D123_Class_1_23C3A870D4A107AE* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AB399FA2AE26D123_Class_1_23C3A870D4A107AE*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB399FA2AE26D123_METHOD_1_9F097181242445DC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_774EE852FA58F327(::Class_1_AB399FA2AE26D123_Class_1_23C3A870D4A107AE* a1, ::RPG::GameCore::EMatchAIState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AB399FA2AE26D123_Class_1_23C3A870D4A107AE*, ::RPG::GameCore::EMatchAIState))((::PBYTE)hIl2Cpp + CLASS_1_AB399FA2AE26D123_METHOD_1_774EE852FA58F327_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_97CD3501BC2A9FF5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB399FA2AE26D123_METHOD_1_97CD3501BC2A9FF5_OFFSET))(this);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB399FA2AE26D123_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB399FA2AE26D123_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::UInt64 Method_1_AEF085E6C83B79B3()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB399FA2AE26D123_METHOD_1_AEF085E6C83B79B3_OFFSET))(this);
	}
};
