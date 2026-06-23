#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

#define CLASS_3_DF1BA959BEC466CC_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x180717D0)
#define CLASS_3_DF1BA959BEC466CC_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x18071930)
#define CLASS_3_DF1BA959BEC466CC_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x180718B0)
#define CLASS_3_DF1BA959BEC466CC_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x18071790)
#define CLASS_3_DF1BA959BEC466CC__CCTOR_OFFSET UNITYSDK_OFFSET(0x18071820)
#define CLASS_3_DF1BA959BEC466CC__CTOR_OFFSET UNITYSDK_OFFSET(0x180718A0)

inline static constexpr unsigned int Class_3_DF1BA959BEC466CC_TypeDefinitionIndex = 80806;

class Class_3_DF1BA959BEC466CC : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_1 = 0xA2; // 0x0
	::System::Boolean Field_3_0; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_DF1BA959BEC466CC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DF1BA959BEC466CC__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DF1BA959BEC466CC_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DF1BA959BEC466CC_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_DF1BA959BEC466CC* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_DF1BA959BEC466CC*(*)())((::PBYTE)hIl2Cpp + CLASS_3_DF1BA959BEC466CC_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DF1BA959BEC466CC_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
