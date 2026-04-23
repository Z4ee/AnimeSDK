#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BindTimeRewindMultiControlType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_89CF3D7005785E86_CLEAR_OFFSET UNITYSDK_OFFSET(0x1117E8E0)
#define CLASS_1_89CF3D7005785E86_METHOD_1_03BFDB1C3240A55A_OFFSET UNITYSDK_OFFSET(0x1117DFD0)
#define CLASS_1_89CF3D7005785E86_METHOD_1_CDFDC252200E6E82_OFFSET UNITYSDK_OFFSET(0x1117DE40)
#define CLASS_1_89CF3D7005785E86_METHOD_1_F036BAE8A0DD8C47_OFFSET UNITYSDK_OFFSET(0x1117DD20)
#define CLASS_1_89CF3D7005785E86__CTOR_OFFSET UNITYSDK_OFFSET(0x1117E980)

inline static constexpr unsigned int Class_1_89CF3D7005785E86_TypeDefinitionIndex = 56096;

class Class_1_89CF3D7005785E86 : public ::System::Object
{
public:
	::RPG::GameCore::EntityTimeRewindComponent* Field_1_0; // 0x10
	::System::Object* Field_1_4; // 0x18
	::Il2CppArray<::RPG::GameCore::EntityTimeRewindComponent*>* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x28
	::RPG::GameCore::BindTimeRewindMultiControlType Field_1_2; // 0x30
	::System::Int32 Field_1_5; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89CF3D7005785E86__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F036BAE8A0DD8C47(::RPG::GameCore::EntityTimeRewindComponent* a1, ::Il2CppArray<::System::UInt32>* a2, ::RPG::GameCore::BindTimeRewindMultiControlType a3, ::System::Object* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*, ::Il2CppArray<::System::UInt32>*, ::RPG::GameCore::BindTimeRewindMultiControlType, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_89CF3D7005785E86_METHOD_1_F036BAE8A0DD8C47_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_CDFDC252200E6E82(::RPG::GameCore::EntityTimeRewindComponent* a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_89CF3D7005785E86_METHOD_1_CDFDC252200E6E82_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_03BFDB1C3240A55A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89CF3D7005785E86_METHOD_1_03BFDB1C3240A55A_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89CF3D7005785E86_CLEAR_OFFSET))(this);
	}
};
