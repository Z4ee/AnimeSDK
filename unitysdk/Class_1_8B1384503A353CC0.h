#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E136401E1657CFD7;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace Collections::Pooled { template <typename T> class PooledSet_1; }
namespace RPG::Client::OpenWorld { class OfflineCullingCellSerializeData; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class JsonOfflineCullingCellSerializeData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8B1384503A353CC0_CLEAR_OFFSET UNITYSDK_OFFSET(0xAF95CD0)
#define CLASS_1_8B1384503A353CC0_METHOD_1_017C915772AE00E9_OFFSET UNITYSDK_OFFSET(0xAF95240)
#define CLASS_1_8B1384503A353CC0_METHOD_1_0E8C38831B017A2A_OFFSET UNITYSDK_OFFSET(0xAF95400)
#define CLASS_1_8B1384503A353CC0_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xAF97160)
#define CLASS_1_8B1384503A353CC0_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0xAF96280)
#define CLASS_1_8B1384503A353CC0_METHOD_1_A021497730B2DA95_OFFSET UNITYSDK_OFFSET(0xAF95AF0)
#define CLASS_1_8B1384503A353CC0_METHOD_1_BC53D0C0E999F7DD_OFFSET UNITYSDK_OFFSET(0xAF952C0)
#define CLASS_1_8B1384503A353CC0_METHOD_1_C53A61ACE6CB7DDE_OFFSET UNITYSDK_OFFSET(0xAF94290)
#define CLASS_1_8B1384503A353CC0_METHOD_1_CD116544C97BFD78_1_OFFSET UNITYSDK_OFFSET(0xAF96B60)
#define CLASS_1_8B1384503A353CC0_METHOD_1_CD116544C97BFD78_OFFSET UNITYSDK_OFFSET(0xAF95500)
#define CLASS_1_8B1384503A353CC0_METHOD_1_D3E55D75AF9C2BFF_OFFSET UNITYSDK_OFFSET(0xAF970F0)
#define CLASS_1_8B1384503A353CC0_METHOD_1_D7DDA895983CCCB2_OFFSET UNITYSDK_OFFSET(0xAF95A90)
#define CLASS_1_8B1384503A353CC0_METHOD_1_F356CEEA92A146D8_OFFSET UNITYSDK_OFFSET(0xAF94350)
#define CLASS_1_8B1384503A353CC0_METHOD_1_F471C870A246D440_OFFSET UNITYSDK_OFFSET(0xAF967A0)
#define CLASS_1_8B1384503A353CC0__CTOR_OFFSET UNITYSDK_OFFSET(0xAF94180)

inline static constexpr unsigned int Class_1_8B1384503A353CC0_TypeDefinitionIndex = 68864;

class Class_1_8B1384503A353CC0 : public ::System::Object
{
public:
	::Collections::Pooled::PooledSet_1<::System::Int32>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_E136401E1657CFD7*>* Field_1_1; // 0x18
	::Collections::Pooled::PooledSet_1<::System::Int32>* Field_1_2; // 0x20
	::Class_1_E136401E1657CFD7* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::Class_1_E136401E1657CFD7*>* Field_1_4; // 0x30
	::Collections::Pooled::PooledSet_1<::System::Int32>* Field_1_5; // 0x38
	::System::Collections::Generic::List_1<::Class_1_E136401E1657CFD7*>* Field_1_6; // 0x40
	::System::Collections::Generic::List_1<::Class_1_E136401E1657CFD7*>* Field_1_7; // 0x48
	::Collections::Pooled::PooledSet_1<::System::Int32>* Field_1_8; // 0x50
	::RPG::Client::OpenWorld::OfflineCullingCellSerializeData* Field_1_9; // 0x58
	::RPG::GameCore::JsonOfflineCullingCellSerializeData* Field_1_10; // 0x60
	::System::Boolean Field_1_11; // 0x68
	::System::Boolean Field_1_12; // 0x69
	::System::Int32 Field_1_13; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B1384503A353CC0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C53A61ACE6CB7DDE(::RPG::GameCore::JsonOfflineCullingCellSerializeData* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonOfflineCullingCellSerializeData*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8B1384503A353CC0_METHOD_1_C53A61ACE6CB7DDE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_017C915772AE00E9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B1384503A353CC0_METHOD_1_017C915772AE00E9_OFFSET))(this);
	}

	::System::Void Method_1_BC53D0C0E999F7DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B1384503A353CC0_METHOD_1_BC53D0C0E999F7DD_OFFSET))(this);
	}

	::System::Void Method_1_F356CEEA92A146D8(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8B1384503A353CC0_METHOD_1_F356CEEA92A146D8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D7DDA895983CCCB2(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8B1384503A353CC0_METHOD_1_D7DDA895983CCCB2_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_A021497730B2DA95(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_8B1384503A353CC0_METHOD_1_A021497730B2DA95_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B1384503A353CC0_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B1384503A353CC0_METHOD_1_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_1_0E8C38831B017A2A(::System::Collections::Generic::List_1<::Class_1_E136401E1657CFD7*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_E136401E1657CFD7*>*))((::PBYTE)hIl2Cpp + CLASS_1_8B1384503A353CC0_METHOD_1_0E8C38831B017A2A_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IList_1<::System::Int32>* Method_1_CD116544C97BFD78(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::IList_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8B1384503A353CC0_METHOD_1_CD116544C97BFD78_OFFSET))(this, a1);
	}

	static ::Collections::Pooled::PooledList_1<::System::Int32>* Method_1_F471C870A246D440(::Collections::Pooled::PooledList_1<::System::Int32>* a1, ::Collections::Pooled::PooledList_1<::System::Int32>* a2)
	{
		return ((::Collections::Pooled::PooledList_1<::System::Int32>*(*)(::Collections::Pooled::PooledList_1<::System::Int32>*, ::Collections::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_8B1384503A353CC0_METHOD_1_F471C870A246D440_OFFSET))(a1, a2);
	}

	::System::Collections::Generic::IList_1<::System::Int32>* Method_1_CD116544C97BFD78_1(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::IList_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8B1384503A353CC0_METHOD_1_CD116544C97BFD78_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IList_1<::System::Int32>* Method_1_D3E55D75AF9C2BFF()
	{
		return ((::System::Collections::Generic::IList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B1384503A353CC0_METHOD_1_D3E55D75AF9C2BFF_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B1384503A353CC0_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
