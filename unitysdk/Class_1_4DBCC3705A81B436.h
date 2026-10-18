#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_131;
class Class_0_16E4307DCC419505_137;
class Class_0_16E4307DCC419505_138;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_4DBCC3705A81B436_GET_EFFECTCOLORS_OFFSET UNITYSDK_OFFSET(0x165A6040)
#define CLASS_1_4DBCC3705A81B436_GET_PAINTCOLORS_OFFSET UNITYSDK_OFFSET(0x165A6030)
#define CLASS_1_4DBCC3705A81B436_GET_POSES_OFFSET UNITYSDK_OFFSET(0x165A6020)
#define CLASS_1_4DBCC3705A81B436__CTOR_OFFSET UNITYSDK_OFFSET(0x165A6010)

inline static constexpr unsigned int Class_1_4DBCC3705A81B436_TypeDefinitionIndex = 80221;

class Class_1_4DBCC3705A81B436 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_138*>* _PaintColors_k__BackingField; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_137*>* _Poses_k__BackingField; // 0x18
	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_131*>* _EffectColors_k__BackingField; // 0x20

	::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_137*>* a1, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_138*>* a2, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_131*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_137*>*, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_138*>*, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_131*>*))((::PBYTE)hIl2Cpp + CLASS_1_4DBCC3705A81B436__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_137*>* get_Poses()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_137*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DBCC3705A81B436_GET_POSES_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_138*>* get_PaintColors()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_138*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DBCC3705A81B436_GET_PAINTCOLORS_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_131*>* get_EffectColors()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_131*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DBCC3705A81B436_GET_EFFECTCOLORS_OFFSET))(this);
	}
};
