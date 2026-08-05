#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8D28662CA5857D33_Struct_2_172B571CADCE37F1.h"
#include "unitysdk/Class_1_8D28662CA5857D33_Struct_2_96F9CA9EC0FA4F95_1.h"
#include "unitysdk/Enum_3_3FDE76C86672FDDC.h"
#include "unitysdk/Enum_3_96F6662CA3713095_13.h"
#include "unitysdk/Enum_3_F42274EA38D48BB2.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_34;
class Class_1_8D28662CA5857D33_Class_1_7DDF32291D457FB6;
class Class_3_025FF4981524A424_126;
class Class_3_452E05BC28CF3B11;
class Class_3_5F8DAA47ACDB7251;
class Class_3_6ECBCF3AD09049F3_3;
class Class_3_793BFD6B897F5A49_1;
class Class_3_7E21E2F8DEAA5F4C_2;
class Class_3_87492AF8E794E45E_29;
class Class_3_AC6D9B6C04699459;
class Class_3_AE02BC8285203464_10;
class Class_3_BE75AAF0F7C40C75;
class Class_3_F6C28A889504BEF6;
class Class_3_F97B015544BE936B;
namespace MoleMole { class UILevelResultPageContext; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_1_516A565475879095;
template <typename T> class Class_1_27F786FF2A30778C;

#define CLASS_1_8D28662CA5857D33_METHOD_1_050B1763C2F8BEF6_OFFSET UNITYSDK_OFFSET(0x147CD8F0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_0665AA50D702EEAD_OFFSET UNITYSDK_OFFSET(0x147D0490)
#define CLASS_1_8D28662CA5857D33_METHOD_1_08E79A9D68105382_OFFSET UNITYSDK_OFFSET(0x147C9D50)
#define CLASS_1_8D28662CA5857D33_METHOD_1_0A687D98CFCD259E_OFFSET UNITYSDK_OFFSET(0x147D29D0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_11F73104217D5BEC_OFFSET UNITYSDK_OFFSET(0x147CCFF0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_152DB1D5ED5EBC1C_OFFSET UNITYSDK_OFFSET(0x147CC980)
#define CLASS_1_8D28662CA5857D33_METHOD_1_154D7FF43FC37C5F_OFFSET UNITYSDK_OFFSET(0x147D3140)
#define CLASS_1_8D28662CA5857D33_METHOD_1_1EE5EC48A5F7B617_OFFSET UNITYSDK_OFFSET(0x147D1AC0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_215B68E3C690D369_OFFSET UNITYSDK_OFFSET(0x147D5560)
#define CLASS_1_8D28662CA5857D33_METHOD_1_28F339A9E7B5239C_OFFSET UNITYSDK_OFFSET(0x147CA880)
#define CLASS_1_8D28662CA5857D33_METHOD_1_2D9D3F9C03E15E29_OFFSET UNITYSDK_OFFSET(0x147CF930)
#define CLASS_1_8D28662CA5857D33_METHOD_1_2E29038CF17E20BD_OFFSET UNITYSDK_OFFSET(0x147C9410)
#define CLASS_1_8D28662CA5857D33_METHOD_1_2ECCEABB73C9E868_OFFSET UNITYSDK_OFFSET(0x147CA1E0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_317C5ABD63DB691F_OFFSET UNITYSDK_OFFSET(0x147D7360)
#define CLASS_1_8D28662CA5857D33_METHOD_1_34024882E27CB24F_OFFSET UNITYSDK_OFFSET(0x147CA710)
#define CLASS_1_8D28662CA5857D33_METHOD_1_3807F672415786EF_OFFSET UNITYSDK_OFFSET(0x147CB440)
#define CLASS_1_8D28662CA5857D33_METHOD_1_3D346792BEAEDC67_OFFSET UNITYSDK_OFFSET(0x147CE540)
#define CLASS_1_8D28662CA5857D33_METHOD_1_4194D22D527AD187_OFFSET UNITYSDK_OFFSET(0x147D1170)
#define CLASS_1_8D28662CA5857D33_METHOD_1_440AD93F2937E590_OFFSET UNITYSDK_OFFSET(0x147CF4A0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_45087265AE41FD70_OFFSET UNITYSDK_OFFSET(0x147CE1E0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_4F1FDDEE2873374E_OFFSET UNITYSDK_OFFSET(0x147D4D90)
#define CLASS_1_8D28662CA5857D33_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x147CD510)
#define CLASS_1_8D28662CA5857D33_METHOD_1_513C7EE8B09CA415_OFFSET UNITYSDK_OFFSET(0x147CCDB0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_5754E0E34398AC50_OFFSET UNITYSDK_OFFSET(0x147CCB40)
#define CLASS_1_8D28662CA5857D33_METHOD_1_6EB1030DB806574F_OFFSET UNITYSDK_OFFSET(0x147D3F20)
#define CLASS_1_8D28662CA5857D33_METHOD_1_7066B751641160E1_OFFSET UNITYSDK_OFFSET(0x147CB480)
#define CLASS_1_8D28662CA5857D33_METHOD_1_71227BBBB7D3D8E0_OFFSET UNITYSDK_OFFSET(0x147C9390)
#define CLASS_1_8D28662CA5857D33_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x147D9E00)
#define CLASS_1_8D28662CA5857D33_METHOD_1_7E6F404A69125A07_OFFSET UNITYSDK_OFFSET(0x147D0A40)
#define CLASS_1_8D28662CA5857D33_METHOD_1_81B1922812003A48_OFFSET UNITYSDK_OFFSET(0x147C98A0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_8D93A9CCC4C2FE2A_OFFSET UNITYSDK_OFFSET(0x147D34D0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_97B44ED90A2DE2AB_OFFSET UNITYSDK_OFFSET(0x147CA7D0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_995F34E9E9E7211A_OFFSET UNITYSDK_OFFSET(0x147D7FE0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_9F7B3DC5D9FAC13F_OFFSET UNITYSDK_OFFSET(0x147CF8C0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_9F9A7F5495274C48_OFFSET UNITYSDK_OFFSET(0x147D3700)
#define CLASS_1_8D28662CA5857D33_METHOD_1_A3F8D5D1A4B7A335_OFFSET UNITYSDK_OFFSET(0x147CEE60)
#define CLASS_1_8D28662CA5857D33_METHOD_1_ABCB6F3846BAC25A_OFFSET UNITYSDK_OFFSET(0x147CB080)
#define CLASS_1_8D28662CA5857D33_METHOD_1_B5962EB4B831785F_OFFSET UNITYSDK_OFFSET(0x147D12F0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_B681CCB7CA0E61C0_OFFSET UNITYSDK_OFFSET(0x147CD210)
#define CLASS_1_8D28662CA5857D33_METHOD_1_BB7FF026EFB0F601_OFFSET UNITYSDK_OFFSET(0x147CA650)
#define CLASS_1_8D28662CA5857D33_METHOD_1_C8065D4F59F4EF02_OFFSET UNITYSDK_OFFSET(0x147CB2D0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_D9B66E4B85294A0A_OFFSET UNITYSDK_OFFSET(0x147C99D0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_E95D9C3479DC33E8_OFFSET UNITYSDK_OFFSET(0x147D5320)
#define CLASS_1_8D28662CA5857D33_METHOD_1_EF3170F6B734AC3A_OFFSET UNITYSDK_OFFSET(0x147D4A30)
#define CLASS_1_8D28662CA5857D33_METHOD_1_F4C7CC5B66AD80B7_1_OFFSET UNITYSDK_OFFSET(0x147CC380)
#define CLASS_1_8D28662CA5857D33_METHOD_1_F4C7CC5B66AD80B7_OFFSET UNITYSDK_OFFSET(0x147CC2D0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_FA409387433AB835_OFFSET UNITYSDK_OFFSET(0x147D7F60)
#define CLASS_1_8D28662CA5857D33_METHOD_1_FF49364EBB3934B0_OFFSET UNITYSDK_OFFSET(0x147CC430)
#define CLASS_1_8D28662CA5857D33_METHOD_1_FFF5E0F1A0643677_OFFSET UNITYSDK_OFFSET(0x147CC1C0)
#define CLASS_1_8D28662CA5857D33__CCTOR_OFFSET UNITYSDK_OFFSET(0x147C92D0)

inline static constexpr unsigned int Class_1_8D28662CA5857D33_TypeDefinitionIndex = 77840;

class Class_1_8D28662CA5857D33 : public ::System::Object
{
public:
	static ::Class_1_8D28662CA5857D33_Class_1_7DDF32291D457FB6** StaticGet_Field_1_0()
	{
		return (::Class_1_8D28662CA5857D33_Class_1_7DDF32291D457FB6**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D28662CA5857D33_TypeDefinitionIndex)->GetStaticField(0x2F200);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_71227BBBB7D3D8E0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_71227BBBB7D3D8E0_OFFSET))();
	}

	static ::System::Void Method_1_81B1922812003A48(::Class_1_8D28662CA5857D33_Struct_2_96F9CA9EC0FA4F95_1& a1)
	{
		return ((::System::Void(*)(::Class_1_8D28662CA5857D33_Struct_2_96F9CA9EC0FA4F95_1&))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_81B1922812003A48_OFFSET))(a1);
	}

	static ::System::Void Method_1_08E79A9D68105382(::System::Boolean a1, ::System::Single a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_08E79A9D68105382_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_2ECCEABB73C9E868(::Class_1_516A565475879095<::System::UInt32, ::Class_3_6ECBCF3AD09049F3_3*>* a1, ::Class_1_516A565475879095<::System::UInt32, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::Class_1_516A565475879095<::System::UInt32, ::Class_3_6ECBCF3AD09049F3_3*>*, ::Class_1_516A565475879095<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_2ECCEABB73C9E868_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BB7FF026EFB0F601(::Class_3_BE75AAF0F7C40C75* a1, ::System::Int32 a2, ::System::Byte a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::Class_3_BE75AAF0F7C40C75*, ::System::Int32, ::System::Byte, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_BB7FF026EFB0F601_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_97B44ED90A2DE2AB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_97B44ED90A2DE2AB_OFFSET))();
	}

	static ::System::Void Method_1_2E29038CF17E20BD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_2E29038CF17E20BD_OFFSET))();
	}

	static ::System::Void Method_1_28F339A9E7B5239C(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_28F339A9E7B5239C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_ABCB6F3846BAC25A(::Class_1_27F786FF2A30778C<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::Class_1_27F786FF2A30778C<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_ABCB6F3846BAC25A_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_C8065D4F59F4EF02()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_C8065D4F59F4EF02_OFFSET))();
	}

	static ::System::Collections::IEnumerator* Method_1_3807F672415786EF()
	{
		return ((::System::Collections::IEnumerator*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_3807F672415786EF_OFFSET))();
	}

	static ::System::Void Method_1_D9B66E4B85294A0A(::Class_1_8D28662CA5857D33_Struct_2_172B571CADCE37F1 a1)
	{
		return ((::System::Void(*)(::Class_1_8D28662CA5857D33_Struct_2_172B571CADCE37F1))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_D9B66E4B85294A0A_OFFSET))(a1);
	}

	static ::System::Void Method_1_FFF5E0F1A0643677(::Class_3_F97B015544BE936B* a1, ::Class_3_7E21E2F8DEAA5F4C_2* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_3_7E21E2F8DEAA5F4C_2*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_FFF5E0F1A0643677_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_FF49364EBB3934B0()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_FF49364EBB3934B0_OFFSET))();
	}

	static ::System::Void Method_1_F4C7CC5B66AD80B7(::Class_3_F97B015544BE936B* a1, ::Class_3_7E21E2F8DEAA5F4C_2* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_3_7E21E2F8DEAA5F4C_2*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_F4C7CC5B66AD80B7_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_152DB1D5ED5EBC1C(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_152DB1D5ED5EBC1C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5754E0E34398AC50(::System::Action_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_5754E0E34398AC50_OFFSET))(a1);
	}

	static ::System::Void Method_1_513C7EE8B09CA415(::Enum_3_96F6662CA3713095_13 a1)
	{
		return ((::System::Void(*)(::Enum_3_96F6662CA3713095_13))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_513C7EE8B09CA415_OFFSET))(a1);
	}

	static ::System::Void Method_1_11F73104217D5BEC(::System::Boolean a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::Class_3_AE02BC8285203464_10* a5, ::Class_3_87492AF8E794E45E_29* a6)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Single, ::System::Single, ::System::Int32, ::Class_3_AE02BC8285203464_10*, ::Class_3_87492AF8E794E45E_29*))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_11F73104217D5BEC_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_B681CCB7CA0E61C0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_B681CCB7CA0E61C0_OFFSET))();
	}

	static ::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_508D4DD02D3DB74E_OFFSET))();
	}

	static ::System::Void Method_1_050B1763C2F8BEF6(::System::Boolean a1, ::System::Boolean a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_050B1763C2F8BEF6_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_A3F8D5D1A4B7A335(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_A3F8D5D1A4B7A335_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::Enum_3_3FDE76C86672FDDC Method_1_9F7B3DC5D9FAC13F(::Class_3_5F8DAA47ACDB7251* a1, ::System::Boolean a2)
	{
		return ((::Enum_3_3FDE76C86672FDDC(*)(::Class_3_5F8DAA47ACDB7251*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_9F7B3DC5D9FAC13F_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_2D9D3F9C03E15E29(::System::Int32& a1)
	{
		return ((::System::Int32(*)(::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_2D9D3F9C03E15E29_OFFSET))(a1);
	}

	static ::System::Void Method_1_0665AA50D702EEAD(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_34*>* a1, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::Class_3_452E05BC28CF3B11*>* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_34*>*, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::Class_3_452E05BC28CF3B11*>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_0665AA50D702EEAD_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_4194D22D527AD187(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_4194D22D527AD187_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_B5962EB4B831785F(::Class_1_516A565475879095<::System::UInt32, ::System::Int32>* a1, ::System::Int32& a2, ::System::Collections::Generic::List_1<::System::Int32>*& a3, ::System::Collections::Generic::List_1<::System::Int32>*& a4, ::System::Int32& a5)
	{
		return ((::System::Boolean(*)(::Class_1_516A565475879095<::System::UInt32, ::System::Int32>*, ::System::Int32&, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_B5962EB4B831785F_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_1EE5EC48A5F7B617(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_1EE5EC48A5F7B617_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_0A687D98CFCD259E(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_0A687D98CFCD259E_OFFSET))(a1);
	}

	static ::System::Void Method_1_154D7FF43FC37C5F(::Class_3_87492AF8E794E45E_29* a1, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_34*>* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Single a6, ::System::Collections::Generic::KeyValuePair_2<::System::Boolean, ::System::Single> a7, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType a8)
	{
		return ((::System::Void(*)(::Class_3_87492AF8E794E45E_29*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_34*>*, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Single, ::System::Collections::Generic::KeyValuePair_2<::System::Boolean, ::System::Single>, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_154D7FF43FC37C5F_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_1_8D93A9CCC4C2FE2A(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_8D93A9CCC4C2FE2A_OFFSET))(a1);
	}

	static ::Class_3_AC6D9B6C04699459* Method_1_9F9A7F5495274C48(::System::Action_3<::System::Boolean, ::System::Boolean, ::Class_3_025FF4981524A424_126*>* a1)
	{
		return ((::Class_3_AC6D9B6C04699459*(*)(::System::Action_3<::System::Boolean, ::System::Boolean, ::Class_3_025FF4981524A424_126*>*))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_9F9A7F5495274C48_OFFSET))(a1);
	}

	static ::Class_3_AC6D9B6C04699459* Method_1_6EB1030DB806574F(::System::Boolean a1, ::System::Boolean a2, ::System::Single a3, ::System::Boolean a4, ::System::Action_3<::System::Boolean, ::System::Boolean, ::Class_3_025FF4981524A424_126*>* a5)
	{
		return ((::Class_3_AC6D9B6C04699459*(*)(::System::Boolean, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Action_3<::System::Boolean, ::System::Boolean, ::Class_3_025FF4981524A424_126*>*))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_6EB1030DB806574F_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Collections::Generic::List_1<::Class_3_7E21E2F8DEAA5F4C_2*>* Method_1_3D346792BEAEDC67(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean& a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_7E21E2F8DEAA5F4C_2*>*(*)(::System::Boolean, ::System::Boolean, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_3D346792BEAEDC67_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_7066B751641160E1(::System::Int32 a1, ::Enum_3_96F6662CA3713095_13 a2, ::Class_3_793BFD6B897F5A49_1* a3, ::Class_3_F6C28A889504BEF6* a4, ::Class_3_BE75AAF0F7C40C75* a5)
	{
		return ((::System::Void(*)(::System::Int32, ::Enum_3_96F6662CA3713095_13, ::Class_3_793BFD6B897F5A49_1*, ::Class_3_F6C28A889504BEF6*, ::Class_3_BE75AAF0F7C40C75*))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_7066B751641160E1_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_EF3170F6B734AC3A(::System::Boolean a1, ::System::Boolean a2, ::Enum_3_96F6662CA3713095_13 a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::Enum_3_96F6662CA3713095_13))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_EF3170F6B734AC3A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_45087265AE41FD70(::System::Boolean& a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_45087265AE41FD70_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E95D9C3479DC33E8(::Class_3_87492AF8E794E45E_29* a1, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_34*>* a2)
	{
		return ((::System::Void(*)(::Class_3_87492AF8E794E45E_29*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_34*>*))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_E95D9C3479DC33E8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_215B68E3C690D369(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_215B68E3C690D369_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_317C5ABD63DB691F(::System::Boolean a1, ::System::Boolean a2, ::Enum_3_96F6662CA3713095_13 a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::Enum_3_96F6662CA3713095_13))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_317C5ABD63DB691F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_7E6F404A69125A07(::MoleMole::UILevelResultPageContext* a1, ::Class_3_AE02BC8285203464_10* a2)
	{
		return ((::System::Void(*)(::MoleMole::UILevelResultPageContext*, ::Class_3_AE02BC8285203464_10*))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_7E6F404A69125A07_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_34024882E27CB24F(::Class_3_BE75AAF0F7C40C75* a1, ::System::Int32 a2, ::System::Byte a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::Class_3_BE75AAF0F7C40C75*, ::System::Int32, ::System::Byte, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_34024882E27CB24F_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_FA409387433AB835(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_FA409387433AB835_OFFSET))(a1);
	}

	static ::System::Void Method_1_4F1FDDEE2873374E(::Class_1_8D28662CA5857D33_Struct_2_96F9CA9EC0FA4F95_1& a1)
	{
		return ((::System::Void(*)(::Class_1_8D28662CA5857D33_Struct_2_96F9CA9EC0FA4F95_1&))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_4F1FDDEE2873374E_OFFSET))(a1);
	}

	static ::System::Void Method_1_995F34E9E9E7211A(::Enum_3_F42274EA38D48BB2 a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Enum_3_F42274EA38D48BB2, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_995F34E9E9E7211A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_79830F666EE579C0_OFFSET))();
	}

	static ::System::Void Method_1_F4C7CC5B66AD80B7_1(::Class_3_F97B015544BE936B* a1, ::Class_3_7E21E2F8DEAA5F4C_2* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_3_7E21E2F8DEAA5F4C_2*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_F4C7CC5B66AD80B7_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_440AD93F2937E590(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_440AD93F2937E590_OFFSET))(a1);
	}
};
