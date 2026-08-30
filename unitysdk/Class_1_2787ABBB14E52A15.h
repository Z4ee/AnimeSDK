#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateContentParamType.h"
#include "unitysdk/RPG/GameCore/FateLevelParamType.h"
#include "unitysdk/Struct_2_AEFDCF1C254BBD23.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_27;
class Class_1_B9AB25D8F16AABB2;
class Class_1_D40936EF3BF54118_24;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2787ABBB14E52A15_METHOD_1_07007F0014325452_OFFSET UNITYSDK_OFFSET(0x19F909C0)
#define CLASS_1_2787ABBB14E52A15_METHOD_1_34010E55ED1A45C3_OFFSET UNITYSDK_OFFSET(0x19F90980)
#define CLASS_1_2787ABBB14E52A15_METHOD_1_45E10D749EF38FBE_OFFSET UNITYSDK_OFFSET(0x19F8FD90)
#define CLASS_1_2787ABBB14E52A15_METHOD_1_639D3208FA5867ED_OFFSET UNITYSDK_OFFSET(0x19F902D0)
#define CLASS_1_2787ABBB14E52A15_METHOD_1_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0x19F90830)
#define CLASS_1_2787ABBB14E52A15_METHOD_1_BA1A163457250A51_OFFSET UNITYSDK_OFFSET(0x19F8FCA0)
#define CLASS_1_2787ABBB14E52A15_METHOD_1_CD64FADAE3A9747A_OFFSET UNITYSDK_OFFSET(0x19F8F790)
#define CLASS_1_2787ABBB14E52A15__CTOR_OFFSET UNITYSDK_OFFSET(0x19F90A00)

inline static constexpr unsigned int Class_1_2787ABBB14E52A15_TypeDefinitionIndex = 64097;

class Class_1_2787ABBB14E52A15 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateLevelParamType, ::System::Double>* JOPBIICJOLA; // 0x10
	::System::Collections::Generic::Dictionary_2<::Struct_2_AEFDCF1C254BBD23, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateContentParamType, ::System::Double>*>* KBICOGNOMEG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2787ABBB14E52A15__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CD64FADAE3A9747A(::Class_1_D40936EF3BF54118_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_24*))((::PBYTE)hIl2Cpp + CLASS_1_2787ABBB14E52A15_METHOD_1_CD64FADAE3A9747A_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA1A163457250A51(::Class_1_B9AB25D8F16AABB2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B9AB25D8F16AABB2*))((::PBYTE)hIl2Cpp + CLASS_1_2787ABBB14E52A15_METHOD_1_BA1A163457250A51_OFFSET))(this, a1);
	}

	::System::Void Method_1_70603E2AE56EBD6B(::Class_1_1CBA230307F9C289_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_27*))((::PBYTE)hIl2Cpp + CLASS_1_2787ABBB14E52A15_METHOD_1_70603E2AE56EBD6B_OFFSET))(this, a1);
	}

	::System::Void Method_1_45E10D749EF38FBE(::Class_1_B9AB25D8F16AABB2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B9AB25D8F16AABB2*))((::PBYTE)hIl2Cpp + CLASS_1_2787ABBB14E52A15_METHOD_1_45E10D749EF38FBE_OFFSET))(this, a1);
	}

	::System::Void Method_1_639D3208FA5867ED(::Class_1_B9AB25D8F16AABB2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B9AB25D8F16AABB2*))((::PBYTE)hIl2Cpp + CLASS_1_2787ABBB14E52A15_METHOD_1_639D3208FA5867ED_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateLevelParamType, ::System::Double>* Method_1_34010E55ED1A45C3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateLevelParamType, ::System::Double>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2787ABBB14E52A15_METHOD_1_34010E55ED1A45C3_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::Struct_2_AEFDCF1C254BBD23, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateContentParamType, ::System::Double>*>* Method_1_07007F0014325452()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Struct_2_AEFDCF1C254BBD23, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateContentParamType, ::System::Double>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2787ABBB14E52A15_METHOD_1_07007F0014325452_OFFSET))(this);
	}
};
