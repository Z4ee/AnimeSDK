#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4F63693E01BB5155_Struct_2_5F25D87DC93413A2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_174;
class Class_1_1FCBF6F207BFD09E;
class Class_1_22EF90524645AFD7;
namespace MoleMole::HollowChessboard { class ICondition; }
namespace MoleMole::HollowChessboard { class IRenderEvent; }
namespace MoleMole::HollowChessboard { class RenderTrackBase; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4F63693E01BB5155_METHOD_1_01EB1B04A59B6A15_OFFSET UNITYSDK_OFFSET(0xF81D6C0)
#define CLASS_1_4F63693E01BB5155_METHOD_1_03A81715BD2AFEF3_OFFSET UNITYSDK_OFFSET(0xF81E320)
#define CLASS_1_4F63693E01BB5155_METHOD_1_14C0D776DBB3584A_OFFSET UNITYSDK_OFFSET(0xF81E200)
#define CLASS_1_4F63693E01BB5155_METHOD_1_169E48D0752099B7_OFFSET UNITYSDK_OFFSET(0xF81DD90)
#define CLASS_1_4F63693E01BB5155_METHOD_1_1CDA0051FD244886_OFFSET UNITYSDK_OFFSET(0xF81D8C0)
#define CLASS_1_4F63693E01BB5155_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xF81EAF0)
#define CLASS_1_4F63693E01BB5155_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xF81E5E0)
#define CLASS_1_4F63693E01BB5155_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xF81DD30)
#define CLASS_1_4F63693E01BB5155_METHOD_1_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0xF81E7F0)
#define CLASS_1_4F63693E01BB5155_METHOD_1_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0xF81E620)
#define CLASS_1_4F63693E01BB5155_METHOD_1_817DB7A7AB6F5FE5_OFFSET UNITYSDK_OFFSET(0xF81E260)
#define CLASS_1_4F63693E01BB5155_METHOD_1_840A5EA7746DC10D_OFFSET UNITYSDK_OFFSET(0xF81E270)
#define CLASS_1_4F63693E01BB5155_METHOD_1_85414E6B2AC66466_OFFSET UNITYSDK_OFFSET(0xF81D8B0)
#define CLASS_1_4F63693E01BB5155_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xF81E530)
#define CLASS_1_4F63693E01BB5155_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF81E1B0)
#define CLASS_1_4F63693E01BB5155_METHOD_1_CEB0AC426B3FC6F6_OFFSET UNITYSDK_OFFSET(0xF81EB50)
#define CLASS_1_4F63693E01BB5155__CTOR_OFFSET UNITYSDK_OFFSET(0xF81D640)

inline static constexpr unsigned int Class_1_4F63693E01BB5155_TypeDefinitionIndex = 70189;

class Class_1_4F63693E01BB5155 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::IRenderEvent*>* Field_1_2; // 0x10
	::Class_1_22EF90524645AFD7* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::System::Collections::Generic::IReadOnlyList_1<::MoleMole::HollowChessboard::ICondition*>*>* Field_1_1; // 0x20
	::Class_1_1FCBF6F207BFD09E* Field_1_5; // 0x28
	::MoleMole::HollowChessboard::RenderTrackBase* Field_1_4; // 0x30
	::Class_1_4F63693E01BB5155_Struct_2_5F25D87DC93413A2 Field_1_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F63693E01BB5155__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_174* Method_1_01EB1B04A59B6A15(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_174*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4F63693E01BB5155_METHOD_1_01EB1B04A59B6A15_OFFSET))(this, a1);
	}

	::System::Void Method_1_85414E6B2AC66466(::MoleMole::HollowChessboard::RenderTrackBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::RenderTrackBase*))((::PBYTE)hIl2Cpp + CLASS_1_4F63693E01BB5155_METHOD_1_85414E6B2AC66466_OFFSET))(this, a1);
	}

	::System::Void Method_1_1CDA0051FD244886()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F63693E01BB5155_METHOD_1_1CDA0051FD244886_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::MoleMole::HollowChessboard::ICondition*>* Method_1_14C0D776DBB3584A(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::MoleMole::HollowChessboard::ICondition*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4F63693E01BB5155_METHOD_1_14C0D776DBB3584A_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::RenderTrackBase* Method_1_817DB7A7AB6F5FE5()
	{
		return ((::MoleMole::HollowChessboard::RenderTrackBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F63693E01BB5155_METHOD_1_817DB7A7AB6F5FE5_OFFSET))(this);
	}

	::System::Void Method_1_840A5EA7746DC10D(::MoleMole::HollowChessboard::RenderTrackBase* a1, ::Class_1_1FCBF6F207BFD09E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::RenderTrackBase*, ::Class_1_1FCBF6F207BFD09E*))((::PBYTE)hIl2Cpp + CLASS_1_4F63693E01BB5155_METHOD_1_840A5EA7746DC10D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_169E48D0752099B7(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4F63693E01BB5155_METHOD_1_169E48D0752099B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F63693E01BB5155_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F63693E01BB5155_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F63693E01BB5155_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_4D9E1AC61B60D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F63693E01BB5155_METHOD_1_4D9E1AC61B60D577_OFFSET))(this);
	}

	::System::Void Method_1_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F63693E01BB5155_METHOD_1_4D2A473556700CDC_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F63693E01BB5155_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_03A81715BD2AFEF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F63693E01BB5155_METHOD_1_03A81715BD2AFEF3_OFFSET))(this);
	}

	::System::Void Method_1_CEB0AC426B3FC6F6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4F63693E01BB5155_METHOD_1_CEB0AC426B3FC6F6_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F63693E01BB5155_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
