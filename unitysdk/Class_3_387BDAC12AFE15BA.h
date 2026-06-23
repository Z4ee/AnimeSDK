#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_CFB7A3C91FBAC44A;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_3_387BDAC12AFE15BA_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x160A0370)
#define CLASS_3_387BDAC12AFE15BA_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x160A0680)
#define CLASS_3_387BDAC12AFE15BA_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x160A0600)
#define CLASS_3_387BDAC12AFE15BA_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x160A0200)
#define CLASS_3_387BDAC12AFE15BA__CCTOR_OFFSET UNITYSDK_OFFSET(0x160A03C0)
#define CLASS_3_387BDAC12AFE15BA__CTOR_OFFSET UNITYSDK_OFFSET(0x160A0440)

inline static constexpr unsigned int Class_3_387BDAC12AFE15BA_TypeDefinitionIndex = 46541;

class Class_3_387BDAC12AFE15BA : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_7 = 0x16; // 0x0
	::System::String* Field_3_6; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_CFB7A3C91FBAC44A*>* Field_3_0; // 0x50
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_3_1; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_3_2; // 0x60
	::UnityEngine::Vector2 Field_3_4; // 0x68
	::System::Boolean Field_3_3; // 0x70
	::System::Single Field_3_5; // 0x74

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_387BDAC12AFE15BA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_387BDAC12AFE15BA__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_387BDAC12AFE15BA_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_387BDAC12AFE15BA_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_387BDAC12AFE15BA* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_387BDAC12AFE15BA*(*)())((::PBYTE)hIl2Cpp + CLASS_3_387BDAC12AFE15BA_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_387BDAC12AFE15BA_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
