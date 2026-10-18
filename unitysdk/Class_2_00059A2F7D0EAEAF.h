#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2BC1F0DE405AE0D4.h"
#include "unitysdk/Struct_2_085541A9CFF64383.h"

class Class_1_483ED67B5E0A21FB;
class Class_1_B87B48EBDCE76E87;
class Class_2_00059A2F7D0EAEAF_Class_1_DEAB2B2F47388664;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionCrowdInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_2_00059A2F7D0EAEAF_METHOD_2_33752FE1B972E845_OFFSET UNITYSDK_OFFSET(0x15CF6880)
#define CLASS_2_00059A2F7D0EAEAF_METHOD_2_33BD944B14B3BF83_OFFSET UNITYSDK_OFFSET(0x15CF7090)
#define CLASS_2_00059A2F7D0EAEAF_METHOD_2_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x15CF67E0)
#define CLASS_2_00059A2F7D0EAEAF_METHOD_2_B917C58B4E14AC1B_OFFSET UNITYSDK_OFFSET(0x15CF65E0)
#define CLASS_2_00059A2F7D0EAEAF_METHOD_2_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x15CF6E60)
#define CLASS_2_00059A2F7D0EAEAF_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15CF5F10)
#define CLASS_2_00059A2F7D0EAEAF_METHOD_2_F882D1A1214DC5D9_OFFSET UNITYSDK_OFFSET(0x15CF7360)
#define CLASS_2_00059A2F7D0EAEAF_METHOD_2_FCBC42911EBAE3CD_OFFSET UNITYSDK_OFFSET(0x15CF7190)
#define CLASS_2_00059A2F7D0EAEAF__CTOR_OFFSET UNITYSDK_OFFSET(0x15CF5F20)

inline static constexpr unsigned int Class_2_00059A2F7D0EAEAF_TypeDefinitionIndex = 69316;

class Class_2_00059A2F7D0EAEAF : public ::Class_1_2BC1F0DE405AE0D4
{
public:
	::System::Collections::Generic::Dictionary_2<::Class_1_B87B48EBDCE76E87*, ::System::Int32>* ODDLNGMHKMG; // 0x80
	::Il2CppArray<::Class_2_00059A2F7D0EAEAF_Class_1_DEAB2B2F47388664*>* MGHEEIIFBDB; // 0x88
	::System::Boolean CHDMMIOPDGD; // 0x90
	::Struct_2_085541A9CFF64383 KCOHLADKHFA; // 0x94

	::System::Void _ctor(::Class_1_483ED67B5E0A21FB* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionCrowdInfo* a2, ::System::Int32 a3, ::UnityEngine::Transform* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_483ED67B5E0A21FB*, ::RPG::GameCore::LevelPedestrianV2IntersectionCrowdInfo*, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_00059A2F7D0EAEAF__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00059A2F7D0EAEAF_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_B917C58B4E14AC1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00059A2F7D0EAEAF_METHOD_2_B917C58B4E14AC1B_OFFSET))(this);
	}

	::System::Boolean Method_2_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00059A2F7D0EAEAF_METHOD_2_568AE7A1499723FD_OFFSET))(this);
	}

	::Class_1_B87B48EBDCE76E87* Method_2_33752FE1B972E845(::System::Single a1)
	{
		return ((::Class_1_B87B48EBDCE76E87*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_00059A2F7D0EAEAF_METHOD_2_33752FE1B972E845_OFFSET))(this, a1);
	}

	::System::Void Method_2_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00059A2F7D0EAEAF_METHOD_2_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void Method_2_33BD944B14B3BF83(::System::Int32 a1, ::Class_1_B87B48EBDCE76E87* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_2_00059A2F7D0EAEAF_METHOD_2_33BD944B14B3BF83_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F882D1A1214DC5D9(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_2_00059A2F7D0EAEAF_METHOD_2_F882D1A1214DC5D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_FCBC42911EBAE3CD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_00059A2F7D0EAEAF_METHOD_2_FCBC42911EBAE3CD_OFFSET))(this, a1);
	}
};
