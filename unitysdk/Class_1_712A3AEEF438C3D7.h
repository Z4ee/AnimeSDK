#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_46AC6DDF5BA24A6F;
class Class_1_ED80D3EC77F13F93;
namespace System { class Type; }

#define CLASS_1_712A3AEEF438C3D7_METHOD_1_0511A783D9C569B6_OFFSET UNITYSDK_OFFSET(0x18D25700)
#define CLASS_1_712A3AEEF438C3D7_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x18D256A0)
#define CLASS_1_712A3AEEF438C3D7_METHOD_1_7F68D6D1D153FE6C_OFFSET UNITYSDK_OFFSET(0x18D25750)
#define CLASS_1_712A3AEEF438C3D7__CTOR_OFFSET UNITYSDK_OFFSET(0x18D25690)

inline static constexpr unsigned int Class_1_712A3AEEF438C3D7_TypeDefinitionIndex = 79887;

class Class_1_712A3AEEF438C3D7 : public ::System::Object
{
public:
	::Class_1_46AC6DDF5BA24A6F* OFJAAJJPHFN; // 0x10

	::System::Void _ctor(::Class_1_46AC6DDF5BA24A6F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_46AC6DDF5BA24A6F*))((::PBYTE)hIl2Cpp + CLASS_1_712A3AEEF438C3D7__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_712A3AEEF438C3D7_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_0511A783D9C569B6()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_712A3AEEF438C3D7_METHOD_1_0511A783D9C569B6_OFFSET))(this);
	}

	::System::Void Method_1_7F68D6D1D153FE6C(::Class_1_ED80D3EC77F13F93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED80D3EC77F13F93*))((::PBYTE)hIl2Cpp + CLASS_1_712A3AEEF438C3D7_METHOD_1_7F68D6D1D153FE6C_OFFSET))(this, a1);
	}
};
