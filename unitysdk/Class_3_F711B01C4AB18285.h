#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_3_F711B01C4AB18285_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x12B50DA0)
#define CLASS_3_F711B01C4AB18285_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x12B50F40)
#define CLASS_3_F711B01C4AB18285_METHOD_3_FD968349EDD16836_OFFSET UNITYSDK_OFFSET(0x12B50FD0)
#define CLASS_3_F711B01C4AB18285_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x12B50D10)
#define CLASS_3_F711B01C4AB18285__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B50DF0)
#define CLASS_3_F711B01C4AB18285__CTOR_OFFSET UNITYSDK_OFFSET(0x12B50E70)

inline static constexpr unsigned int Class_3_F711B01C4AB18285_TypeDefinitionIndex = 58914;

class Class_3_F711B01C4AB18285 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_7 = 0xC3; // 0x0
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_3_0; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F711B01C4AB18285__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F711B01C4AB18285__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F711B01C4AB18285_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F711B01C4AB18285_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F711B01C4AB18285_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_F711B01C4AB18285* Method_3_FD968349EDD16836()
	{
		return ((::Class_3_F711B01C4AB18285*(*)())((::PBYTE)hIl2Cpp + CLASS_3_F711B01C4AB18285_METHOD_3_FD968349EDD16836_OFFSET))();
	}
};
