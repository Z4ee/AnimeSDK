#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Monster/SymmetryMatrixList.h"

class Class_1_B08665FEB7112467_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x16CDF370)
#define MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX_METHOD_2_5F6398776E49CD87_OFFSET UNITYSDK_OFFSET(0x16CDF2E0)
#define MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x16CDF490)
#define MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX_METHOD_2_AFC923413AD5A282_OFFSET UNITYSDK_OFFSET(0x16CDEDB0)
#define MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX_METHOD_2_C9665CE87E0304EF_OFFSET UNITYSDK_OFFSET(0x16CDF1B0)
#define MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX__CTOR_OFFSET UNITYSDK_OFFSET(0x16CDEB70)

namespace MoleMole::Monster
{
	inline static constexpr unsigned int MonsterCampCollisionMatrix_TypeDefinitionIndex = 50327;

	class MonsterCampCollisionMatrix : public ::MoleMole::Monster::SymmetryMatrixList
	{
	public:
		// static const ::System::Int32 INVALID_CAMP_INDEX = 0xFFFFFFFF; // 0x0
		::Class_1_B08665FEB7112467_1* Drawer; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* ItemMap; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_2_AFC923413AD5A282(::System::Int32 a1, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX_METHOD_2_AFC923413AD5A282_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_5F6398776E49CD87(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX_METHOD_2_5F6398776E49CD87_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_51CFFE2AF748ECD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
		}

		::System::Int32 Method_2_95780ED94B90ED36()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX_METHOD_2_95780ED94B90ED36_OFFSET))(this);
		}

		::System::Int32 Method_2_C9665CE87E0304EF(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTER_MONSTERCAMPCOLLISIONMATRIX_METHOD_2_C9665CE87E0304EF_OFFSET))(this, a1);
		}
	};
}
