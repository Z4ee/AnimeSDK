#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_1958EDD0843A6E37.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_5;
class Class_1_AEB553DB263EED70;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_EE7BAB50CE688D22_METHOD_1_0D91213B431A821E_OFFSET UNITYSDK_OFFSET(0x1CC905F0)
#define CLASS_1_EE7BAB50CE688D22_METHOD_1_14804AC1DF83A1A9_OFFSET UNITYSDK_OFFSET(0x1CC8ED50)
#define CLASS_1_EE7BAB50CE688D22_METHOD_1_19C0C525F1DD5057_OFFSET UNITYSDK_OFFSET(0x1CC90340)
#define CLASS_1_EE7BAB50CE688D22_METHOD_1_336B1AE4C9F6D9CC_OFFSET UNITYSDK_OFFSET(0x1CC8EEB0)
#define CLASS_1_EE7BAB50CE688D22_METHOD_1_39BD6F39678F30EF_OFFSET UNITYSDK_OFFSET(0x1CC905C0)
#define CLASS_1_EE7BAB50CE688D22_METHOD_1_77A0D9F57C8133DF_OFFSET UNITYSDK_OFFSET(0x1CC90420)
#define CLASS_1_EE7BAB50CE688D22_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1CC907B0)
#define CLASS_1_EE7BAB50CE688D22_METHOD_1_A20B0DD2EE049153_OFFSET UNITYSDK_OFFSET(0x1CC90320)
#define CLASS_1_EE7BAB50CE688D22_METHOD_1_DB26246A70F26FB8_OFFSET UNITYSDK_OFFSET(0x1CC90540)
#define CLASS_1_EE7BAB50CE688D22_METHOD_1_E7498AF04E8E685D_OFFSET UNITYSDK_OFFSET(0x1CC90390)
#define CLASS_1_EE7BAB50CE688D22_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x1CC904B0)
#define CLASS_1_EE7BAB50CE688D22_METHOD_1_F8CCD44CD53E2E38_OFFSET UNITYSDK_OFFSET(0x1CC905E0)
#define CLASS_1_EE7BAB50CE688D22__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC8ECF0)

inline static constexpr unsigned int Class_1_EE7BAB50CE688D22_TypeDefinitionIndex = 10360;

class Class_1_EE7BAB50CE688D22 : public ::System::Object
{
public:
	::System::Collections::Generic::Stack_1<::RPG::GameCore::FixPoint>* BANEIMEKJLM; // 0x10
	::Class_0_16E4307DCC419505_5* JHMHLCDNGPA; // 0x18
	::System::Collections::Generic::List_1<::Class_1_AEB553DB263EED70*>* PPIDAHOEFKN; // 0x20
	::Struct_2_1958EDD0843A6E37 NDEGMLLNAMH; // 0x28
	::System::Int32 KOLDAFOGHKH; // 0x40
	::System::Boolean GKGBMIOAGNN; // 0x44

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE7BAB50CE688D22__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_14804AC1DF83A1A9(::System::String* a1, ::System::Func_2<::Il2CppArray<::RPG::GameCore::FixPoint>*, ::RPG::GameCore::FixPoint>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Func_2<::Il2CppArray<::RPG::GameCore::FixPoint>*, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_EE7BAB50CE688D22_METHOD_1_14804AC1DF83A1A9_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_336B1AE4C9F6D9CC(::Struct_2_1958EDD0843A6E37 a1, ::Class_0_16E4307DCC419505_5* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Struct_2_1958EDD0843A6E37, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + CLASS_1_EE7BAB50CE688D22_METHOD_1_336B1AE4C9F6D9CC_OFFSET))(this, a1, a2);
	}

	::System::Byte Method_1_19C0C525F1DD5057()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE7BAB50CE688D22_METHOD_1_19C0C525F1DD5057_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_E7498AF04E8E685D()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE7BAB50CE688D22_METHOD_1_E7498AF04E8E685D_OFFSET))(this);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE7BAB50CE688D22_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Void Method_1_77A0D9F57C8133DF(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_EE7BAB50CE688D22_METHOD_1_77A0D9F57C8133DF_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_39BD6F39678F30EF()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE7BAB50CE688D22_METHOD_1_39BD6F39678F30EF_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_F8CCD44CD53E2E38(::System::Int32 a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EE7BAB50CE688D22_METHOD_1_F8CCD44CD53E2E38_OFFSET))(this, a1);
	}

	::System::Void Method_1_0D91213B431A821E(::RPG::GameCore::FixPoint a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EE7BAB50CE688D22_METHOD_1_0D91213B431A821E_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_DB26246A70F26FB8(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EE7BAB50CE688D22_METHOD_1_DB26246A70F26FB8_OFFSET))(this, a1);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE7BAB50CE688D22_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_1_A20B0DD2EE049153(::Struct_2_1958EDD0843A6E37 a1, ::Class_0_16E4307DCC419505_5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_1958EDD0843A6E37, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + CLASS_1_EE7BAB50CE688D22_METHOD_1_A20B0DD2EE049153_OFFSET))(this, a1, a2);
	}
};
