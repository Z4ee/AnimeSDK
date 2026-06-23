#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_1_D7305149E3DC417E_METHOD_1_4BF21F41F4564E7A_OFFSET UNITYSDK_OFFSET(0x19EAE790)
#define CLASS_1_D7305149E3DC417E_METHOD_1_FD57377CACCEC018_OFFSET UNITYSDK_OFFSET(0x19EAE6F0)
#define CLASS_1_D7305149E3DC417E__CTOR_OFFSET UNITYSDK_OFFSET(0x19EAE6E0)

inline static constexpr unsigned int Class_1_D7305149E3DC417E_TypeDefinitionIndex = 50795;

class Class_1_D7305149E3DC417E : public ::System::Object
{
public:
	::System::Action_3<::System::Boolean, ::System::Int32, ::System::Boolean>* Field_1_0; // 0x10
	::System::Action_3<::System::Int32, ::System::Boolean, ::System::Action*>* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7305149E3DC417E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FD57377CACCEC018(::System::Int32 a1, ::System::Boolean a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D7305149E3DC417E_METHOD_1_FD57377CACCEC018_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4BF21F41F4564E7A(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D7305149E3DC417E_METHOD_1_4BF21F41F4564E7A_OFFSET))(this, a1, a2, a3);
	}
};
