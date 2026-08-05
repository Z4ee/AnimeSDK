#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_1_B036D6550F74A038;
namespace Nap::NapECS { class EcsComponent; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_BE7DD865AEF4A460_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1595B860)
#define CLASS_3_BE7DD865AEF4A460_METHOD_3_52843B847BEFBCAA_OFFSET UNITYSDK_OFFSET(0x1595BA10)
#define CLASS_3_BE7DD865AEF4A460_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1595BB70)
#define CLASS_3_BE7DD865AEF4A460_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1595B7B0)
#define CLASS_3_BE7DD865AEF4A460__CCTOR_OFFSET UNITYSDK_OFFSET(0x1595B8B0)
#define CLASS_3_BE7DD865AEF4A460__CTOR_OFFSET UNITYSDK_OFFSET(0x1595B930)

inline static constexpr unsigned int Class_3_BE7DD865AEF4A460_TypeDefinitionIndex = 61616;

class Class_3_BE7DD865AEF4A460 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_5 = 0x3B; // 0x0
	::System::Collections::Generic::List_1<::Class_1_B036D6550F74A038*>* Field_3_0; // 0x48
	::System::Action_3<::System::Int32, ::System::Int32, ::System::UInt32>* Field_3_6; // 0x50
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*>* Field_3_7; // 0x58
	::System::Int32 Field_3_1; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_BE7DD865AEF4A460__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BE7DD865AEF4A460__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BE7DD865AEF4A460_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BE7DD865AEF4A460_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_BE7DD865AEF4A460* Method_3_52843B847BEFBCAA()
	{
		return ((::Class_3_BE7DD865AEF4A460*(*)())((::PBYTE)hIl2Cpp + CLASS_3_BE7DD865AEF4A460_METHOD_3_52843B847BEFBCAA_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BE7DD865AEF4A460_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
