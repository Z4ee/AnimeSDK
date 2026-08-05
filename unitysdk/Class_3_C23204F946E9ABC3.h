#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class NapLodController;
class NapLodControllerGroup;

#define CLASS_3_C23204F946E9ABC3_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x17E707F0)
#define CLASS_3_C23204F946E9ABC3_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x17E708D0)
#define CLASS_3_C23204F946E9ABC3_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x17E70960)
#define CLASS_3_C23204F946E9ABC3_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x17E707A0)
#define CLASS_3_C23204F946E9ABC3__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E70840)
#define CLASS_3_C23204F946E9ABC3__CTOR_OFFSET UNITYSDK_OFFSET(0x17E708C0)

inline static constexpr unsigned int Class_3_C23204F946E9ABC3_TypeDefinitionIndex = 46498;

class Class_3_C23204F946E9ABC3 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_0 = 0xD3; // 0x0
	::Il2CppArray<::NapLodController*>* Field_3_1; // 0x48
	::NapLodControllerGroup* Field_3_2; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C23204F946E9ABC3__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C23204F946E9ABC3__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C23204F946E9ABC3_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C23204F946E9ABC3_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C23204F946E9ABC3_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_C23204F946E9ABC3* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_C23204F946E9ABC3*(*)())((::PBYTE)hIl2Cpp + CLASS_3_C23204F946E9ABC3_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
