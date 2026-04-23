#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifyCalcOpType.h"
#include "unitysdk/System/Object.h"

class Class_1_53590B4EB9133BC0_Class_0_16E7307DCC43CB2C_16;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_53590B4EB9133BC0_METHOD_1_46B568FD2B313CA9_OFFSET UNITYSDK_OFFSET(0x11933D60)
#define CLASS_1_53590B4EB9133BC0_METHOD_1_79FEC453AF476534_OFFSET UNITYSDK_OFFSET(0x119333E0)
#define CLASS_1_53590B4EB9133BC0_METHOD_1_7CEFB8AEC0850367_OFFSET UNITYSDK_OFFSET(0x11933BD0)
#define CLASS_1_53590B4EB9133BC0_METHOD_1_D5C25C4FCCCBFE52_OFFSET UNITYSDK_OFFSET(0x11933F90)
#define CLASS_1_53590B4EB9133BC0_METHOD_1_F057E1E4E39412F4_OFFSET UNITYSDK_OFFSET(0x119335B0)
#define CLASS_1_53590B4EB9133BC0__CTOR_OFFSET UNITYSDK_OFFSET(0x11933520)

inline static constexpr unsigned int Class_1_53590B4EB9133BC0_TypeDefinitionIndex = 60094;

class Class_1_53590B4EB9133BC0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_53590B4EB9133BC0_Class_0_16E7307DCC43CB2C_16*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53590B4EB9133BC0__CTOR_OFFSET))(this);
	}

	static ::Class_1_53590B4EB9133BC0* Method_1_79FEC453AF476534(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::UInt32 a2)
	{
		return ((::Class_1_53590B4EB9133BC0*(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_53590B4EB9133BC0_METHOD_1_79FEC453AF476534_OFFSET))(a1, a2);
	}

	::System::String* Method_1_7CEFB8AEC0850367(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_53590B4EB9133BC0_METHOD_1_7CEFB8AEC0850367_OFFSET))(this, a1);
	}

	::System::Void Method_1_46B568FD2B313CA9(::System::UInt32 a1, ::RPG::GameCore::FixPoint& a2, ::RPG::GameCore::ModifyCalcOpType& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::ModifyCalcOpType&))((::PBYTE)hIl2Cpp + CLASS_1_53590B4EB9133BC0_METHOD_1_46B568FD2B313CA9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F057E1E4E39412F4(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_53590B4EB9133BC0_METHOD_1_F057E1E4E39412F4_OFFSET))(this, a1, a2);
	}

	::Class_1_53590B4EB9133BC0_Class_0_16E7307DCC43CB2C_16* Method_1_D5C25C4FCCCBFE52(::RPG::GameCore::ModifyCalcOpType a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::Class_1_53590B4EB9133BC0_Class_0_16E7307DCC43CB2C_16*(*)(::PVOID, ::RPG::GameCore::ModifyCalcOpType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_53590B4EB9133BC0_METHOD_1_D5C25C4FCCCBFE52_OFFSET))(this, a1, a2);
	}
};
