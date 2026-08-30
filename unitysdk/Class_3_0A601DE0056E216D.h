#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_0DEB44140A26ADC0;
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_0A601DE0056E216D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16CDBD90)
#define CLASS_3_0A601DE0056E216D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16CDBDD0)
#define CLASS_3_0A601DE0056E216D__CTOR_OFFSET UNITYSDK_OFFSET(0x16CDBD60)

inline static constexpr unsigned int Class_3_0A601DE0056E216D_TypeDefinitionIndex = 54034;

class Class_3_0A601DE0056E216D : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_0DEB44140A26ADC0*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* GCJJPFNPGCF; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_0DEB44140A26ADC0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_0DEB44140A26ADC0*))((::PBYTE)hIl2Cpp + CLASS_3_0A601DE0056E216D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0A601DE0056E216D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0A601DE0056E216D_ONTASKBEGIN_OFFSET))(this);
	}
};
