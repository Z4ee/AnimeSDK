#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_31.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameRecordType.h"
#include "unitysdk/System/Object.h"

class Class_1_7FF19F6206AF6DD7_88;
namespace RPG::Client { class SwordTrainingGameInstance; }
namespace RPG::Client::SwordTraining { class SwordTrainingGameRecordInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_88919E13E511732D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18F2A010)
#define CLASS_1_88919E13E511732D_METHOD_1_0DC2F0007A1C128F_OFFSET UNITYSDK_OFFSET(0x18F2BA40)
#define CLASS_1_88919E13E511732D_METHOD_1_14CE3194730CF1A3_OFFSET UNITYSDK_OFFSET(0x18F2B100)
#define CLASS_1_88919E13E511732D_METHOD_1_1EC035885F71E750_OFFSET UNITYSDK_OFFSET(0x18F2AFC0)
#define CLASS_1_88919E13E511732D_METHOD_1_44F16B36D6E8A418_OFFSET UNITYSDK_OFFSET(0x18F2A380)
#define CLASS_1_88919E13E511732D_METHOD_1_614076B3F71F4A3E_1_OFFSET UNITYSDK_OFFSET(0x18F2AC90)
#define CLASS_1_88919E13E511732D_METHOD_1_614076B3F71F4A3E_2_OFFSET UNITYSDK_OFFSET(0x18F2B1A0)
#define CLASS_1_88919E13E511732D_METHOD_1_614076B3F71F4A3E_OFFSET UNITYSDK_OFFSET(0x18F2A5B0)
#define CLASS_1_88919E13E511732D_METHOD_1_88AB60EC06BE78FB_OFFSET UNITYSDK_OFFSET(0x18F2B490)
#define CLASS_1_88919E13E511732D_METHOD_1_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0x18F2AE30)
#define CLASS_1_88919E13E511732D_METHOD_1_8BFD994C0A8E2F6B_OFFSET UNITYSDK_OFFSET(0x18F2B970)
#define CLASS_1_88919E13E511732D_METHOD_1_8FB2DF1FD70B27D8_OFFSET UNITYSDK_OFFSET(0x18F2BC60)
#define CLASS_1_88919E13E511732D_METHOD_1_93B023140E1C9FFB_1_OFFSET UNITYSDK_OFFSET(0x18F2A410)
#define CLASS_1_88919E13E511732D_METHOD_1_93B023140E1C9FFB_OFFSET UNITYSDK_OFFSET(0x18F2A1E0)
#define CLASS_1_88919E13E511732D_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x18F29F30)
#define CLASS_1_88919E13E511732D_METHOD_1_BED35D89A6A10D7A_1_OFFSET UNITYSDK_OFFSET(0x18F2AB40)
#define CLASS_1_88919E13E511732D_METHOD_1_BED35D89A6A10D7A_OFFSET UNITYSDK_OFFSET(0x18F2A9F0)
#define CLASS_1_88919E13E511732D_METHOD_1_C0D69F22318C86FE_1_OFFSET UNITYSDK_OFFSET(0x18F2A8A0)
#define CLASS_1_88919E13E511732D_METHOD_1_C0D69F22318C86FE_2_OFFSET UNITYSDK_OFFSET(0x18F2BD70)
#define CLASS_1_88919E13E511732D_METHOD_1_C0D69F22318C86FE_3_OFFSET UNITYSDK_OFFSET(0x18F2B340)
#define CLASS_1_88919E13E511732D_METHOD_1_C0D69F22318C86FE_OFFSET UNITYSDK_OFFSET(0x18F2A750)
#define CLASS_1_88919E13E511732D_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x18F2A120)
#define CLASS_1_88919E13E511732D_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x18F2B8E0)
#define CLASS_1_88919E13E511732D__CTOR_OFFSET UNITYSDK_OFFSET(0x18F2BEC0)

inline static constexpr unsigned int Class_1_88919E13E511732D_TypeDefinitionIndex = 71451;

class Class_1_88919E13E511732D : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88919E13E511732D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88919E13E511732D_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88919E13E511732D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88919E13E511732D_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_1_93B023140E1C9FFB(::Enum_3_96F6662CA3713095_31 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_31, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_88919E13E511732D_METHOD_1_93B023140E1C9FFB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_93B023140E1C9FFB_1(::Enum_3_96F6662CA3713095_31 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_31, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_88919E13E511732D_METHOD_1_93B023140E1C9FFB_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_614076B3F71F4A3E(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_88919E13E511732D_METHOD_1_614076B3F71F4A3E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C0D69F22318C86FE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_88919E13E511732D_METHOD_1_C0D69F22318C86FE_OFFSET))(this, a1);
	}

	::System::Void Method_1_C0D69F22318C86FE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_88919E13E511732D_METHOD_1_C0D69F22318C86FE_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_BED35D89A6A10D7A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_88919E13E511732D_METHOD_1_BED35D89A6A10D7A_OFFSET))(this, a1);
	}

	::System::Void Method_1_BED35D89A6A10D7A_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_88919E13E511732D_METHOD_1_BED35D89A6A10D7A_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_614076B3F71F4A3E_1(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_88919E13E511732D_METHOD_1_614076B3F71F4A3E_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8B848E52913DFCE9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88919E13E511732D_METHOD_1_8B848E52913DFCE9_OFFSET))(this);
	}

	::System::Void Method_1_88AB60EC06BE78FB(::Class_1_7FF19F6206AF6DD7_88* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_88*))((::PBYTE)hIl2Cpp + CLASS_1_88919E13E511732D_METHOD_1_88AB60EC06BE78FB_OFFSET))(this, a1);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88919E13E511732D_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void Method_1_1EC035885F71E750(::RPG::Client::SwordTraining::SwordTrainingGameRecordType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingGameRecordType))((::PBYTE)hIl2Cpp + CLASS_1_88919E13E511732D_METHOD_1_1EC035885F71E750_OFFSET))(this, a1);
	}

	::System::Void Method_1_0DC2F0007A1C128F(::RPG::Client::SwordTraining::SwordTrainingGameRecordType a1, ::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingGameRecordType, ::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_88919E13E511732D_METHOD_1_0DC2F0007A1C128F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8FB2DF1FD70B27D8(::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_88919E13E511732D_METHOD_1_8FB2DF1FD70B27D8_OFFSET))(this, a1);
	}

	::System::Void Method_1_8BFD994C0A8E2F6B(::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo*))((::PBYTE)hIl2Cpp + CLASS_1_88919E13E511732D_METHOD_1_8BFD994C0A8E2F6B_OFFSET))(this, a1);
	}

	::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo* Method_1_44F16B36D6E8A418()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88919E13E511732D_METHOD_1_44F16B36D6E8A418_OFFSET))(this);
	}

	::System::Void Method_1_614076B3F71F4A3E_2(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_88919E13E511732D_METHOD_1_614076B3F71F4A3E_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C0D69F22318C86FE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_88919E13E511732D_METHOD_1_C0D69F22318C86FE_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_C0D69F22318C86FE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_88919E13E511732D_METHOD_1_C0D69F22318C86FE_3_OFFSET))(this, a1);
	}

	::RPG::Client::SwordTrainingGameInstance* Method_1_14CE3194730CF1A3()
	{
		return ((::RPG::Client::SwordTrainingGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88919E13E511732D_METHOD_1_14CE3194730CF1A3_OFFSET))(this);
	}
};
