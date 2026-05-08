#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_1_9EBF632273D0F552;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_0C1E17B078496185_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1741C230)
#define CLASS_3_0C1E17B078496185_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1741C390)
#define CLASS_3_0C1E17B078496185_METHOD_3_AD677364DBCC6607_OFFSET UNITYSDK_OFFSET(0x1741C420)
#define CLASS_3_0C1E17B078496185_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x1741C310)
#define CLASS_3_0C1E17B078496185_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1741BED0)
#define CLASS_3_0C1E17B078496185__CCTOR_OFFSET UNITYSDK_OFFSET(0x1741C280)
#define CLASS_3_0C1E17B078496185__CTOR_OFFSET UNITYSDK_OFFSET(0x1741C300)

inline static constexpr unsigned int Class_3_0C1E17B078496185_TypeDefinitionIndex = 71764;

class Class_3_0C1E17B078496185 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_7 = 0x8D; // 0x0
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_3_3; // 0x48
	::UnityEngine::GameObject* Field_3_6; // 0x50
	::System::Action_1<::Class_3_0C1E17B078496185*>* Field_3_5; // 0x58
	::System::Collections::Generic::List_1<::Class_1_9EBF632273D0F552*>* Field_3_0; // 0x60
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_2; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_9EBF632273D0F552*>* Field_3_1; // 0x70
	::System::Boolean Field_3_4; // 0x78

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_0C1E17B078496185__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0C1E17B078496185__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0C1E17B078496185_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0C1E17B078496185_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_0C1E17B078496185* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_0C1E17B078496185*(*)())((::PBYTE)hIl2Cpp + CLASS_3_0C1E17B078496185_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0C1E17B078496185_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_AD677364DBCC6607(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_0C1E17B078496185_METHOD_3_AD677364DBCC6607_OFFSET))(this, a1);
	}
};
