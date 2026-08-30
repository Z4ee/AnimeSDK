#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BindTimeRewindMultiControlType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4057065B3D76240A_CLEAR_OFFSET UNITYSDK_OFFSET(0x13F0B260)
#define CLASS_1_4057065B3D76240A_METHOD_1_03BFDB1C3240A55A_OFFSET UNITYSDK_OFFSET(0x13F0AA30)
#define CLASS_1_4057065B3D76240A_METHOD_1_709CCF03BB285FED_OFFSET UNITYSDK_OFFSET(0x13F0A870)
#define CLASS_1_4057065B3D76240A_METHOD_1_7F7B6EA0D319E505_OFFSET UNITYSDK_OFFSET(0x13F0A720)
#define CLASS_1_4057065B3D76240A__CTOR_OFFSET UNITYSDK_OFFSET(0x13F0B2E0)

inline static constexpr unsigned int Class_1_4057065B3D76240A_TypeDefinitionIndex = 60932;

class Class_1_4057065B3D76240A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* KBINOPCHKJC; // 0x10
	::RPG::GameCore::EntityTimeRewindComponent* FNKOAJJKJNC; // 0x18
	::System::Object* OMHNKKKKNID; // 0x20
	::Il2CppArray<::RPG::GameCore::EntityTimeRewindComponent*>* KGDLDFAHHMI; // 0x28
	::RPG::GameCore::BindTimeRewindMultiControlType GKEBDIGBODK; // 0x30
	::System::Int32 NMFFGLHFDDE; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4057065B3D76240A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7F7B6EA0D319E505(::RPG::GameCore::EntityTimeRewindComponent* a1, ::Il2CppArray<::System::UInt32>* a2, ::RPG::GameCore::BindTimeRewindMultiControlType a3, ::System::Object* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*, ::Il2CppArray<::System::UInt32>*, ::RPG::GameCore::BindTimeRewindMultiControlType, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4057065B3D76240A_METHOD_1_7F7B6EA0D319E505_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_709CCF03BB285FED(::RPG::GameCore::EntityTimeRewindComponent* a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_4057065B3D76240A_METHOD_1_709CCF03BB285FED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_03BFDB1C3240A55A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4057065B3D76240A_METHOD_1_03BFDB1C3240A55A_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4057065B3D76240A_CLEAR_OFFSET))(this);
	}
};
