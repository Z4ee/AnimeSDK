#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CA34172F658E0C88.h"
#include "unitysdk/RPG/Client/PhotoGraphTag.h"

namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_E4324DB53A3E5F8A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8C37550)
#define CLASS_3_E4324DB53A3E5F8A_METHOD_3_3608D218C7E0F964_OFFSET UNITYSDK_OFFSET(0x8C378C0)
#define CLASS_3_E4324DB53A3E5F8A_METHOD_3_DA164959E10A7D05_OFFSET UNITYSDK_OFFSET(0x8C37630)
#define CLASS_3_E4324DB53A3E5F8A_METHOD_3_DB5ADC09526D5F46_OFFSET UNITYSDK_OFFSET(0x8C379A0)
#define CLASS_3_E4324DB53A3E5F8A_METHOD_3_FCF18F3CBCDFE6A7_OFFSET UNITYSDK_OFFSET(0x8C37830)
#define CLASS_3_E4324DB53A3E5F8A__CTOR_OFFSET UNITYSDK_OFFSET(0x8C37950)
#define CLASS_3_E4324DB53A3E5F8A___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8C37990)

inline static constexpr unsigned int Class_3_E4324DB53A3E5F8A_TypeDefinitionIndex = 56746;

class Class_3_E4324DB53A3E5F8A : public ::Class_2_CA34172F658E0C88
{
public:
	::RPG::Client::PhotoGraphTag Field_3_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E4324DB53A3E5F8A__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E4324DB53A3E5F8A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_DA164959E10A7D05(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphAimContainerConfig* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E4324DB53A3E5F8A_METHOD_3_DA164959E10A7D05_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_FCF18F3CBCDFE6A7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_E4324DB53A3E5F8A_METHOD_3_FCF18F3CBCDFE6A7_OFFSET))(this, a1);
	}

	::System::Void Method_3_3608D218C7E0F964(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_E4324DB53A3E5F8A_METHOD_3_3608D218C7E0F964_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E4324DB53A3E5F8A___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_DB5ADC09526D5F46(::RPG::GameCore::TaskContext* P0, ::RPG::GameCore::PhotoGraphAimContainerConfig* P1, ::System::Int32 P2, ::System::Int32 P3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E4324DB53A3E5F8A_METHOD_3_DB5ADC09526D5F46_OFFSET))(this, P0, P1, P2, P3);
	}
};
