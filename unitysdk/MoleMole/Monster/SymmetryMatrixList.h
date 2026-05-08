#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Monster/MatrixKeyItem.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONSTER_SYMMETRYMATRIXLIST_METHOD_1_42A6A41AC7891AB7_OFFSET UNITYSDK_OFFSET(0x13866C10)
#define MOLEMOLE_MONSTER_SYMMETRYMATRIXLIST_METHOD_1_6CB5060D47BF8A1B_OFFSET UNITYSDK_OFFSET(0x13866EE0)
#define MOLEMOLE_MONSTER_SYMMETRYMATRIXLIST_METHOD_1_7C1CC32DF15104A0_OFFSET UNITYSDK_OFFSET(0x13866D80)
#define MOLEMOLE_MONSTER_SYMMETRYMATRIXLIST_METHOD_1_A37026F5FDBACF68_OFFSET UNITYSDK_OFFSET(0x13866FD0)
#define MOLEMOLE_MONSTER_SYMMETRYMATRIXLIST_METHOD_1_E4B3C4AAF2EA0017_OFFSET UNITYSDK_OFFSET(0x13866F40)
#define MOLEMOLE_MONSTER_SYMMETRYMATRIXLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x138665D0)

namespace MoleMole::Monster
{
	inline static constexpr unsigned int SymmetryMatrixList_TypeDefinitionIndex = 39981;

	class SymmetryMatrixList : public ::System::Object
	{
	public:
		// static const ::System::Int32 MaxKeyCount = 0x20; // 0x0
		// static const ::System::Int32 MaxValueCount = 0x210; // 0x0
		::System::Collections::Generic::List_1<::MoleMole::Monster::MatrixKeyItem>* MartixKeys; // 0x10
		::Il2CppArray<::System::Boolean>* MatrixValues; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTER_SYMMETRYMATRIXLIST__CTOR_OFFSET))(this);
		}

		::System::String* Method_1_7C1CC32DF15104A0(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTER_SYMMETRYMATRIXLIST_METHOD_1_7C1CC32DF15104A0_OFFSET))(this, a1);
		}

		::System::Void Method_1_6CB5060D47BF8A1B(::System::Int32& a1, ::System::Int32& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTER_SYMMETRYMATRIXLIST_METHOD_1_6CB5060D47BF8A1B_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_E4B3C4AAF2EA0017(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTER_SYMMETRYMATRIXLIST_METHOD_1_E4B3C4AAF2EA0017_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 Method_1_A37026F5FDBACF68(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTER_SYMMETRYMATRIXLIST_METHOD_1_A37026F5FDBACF68_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_42A6A41AC7891AB7(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTER_SYMMETRYMATRIXLIST_METHOD_1_42A6A41AC7891AB7_OFFSET))(this, a1, a2);
		}
	};
}
