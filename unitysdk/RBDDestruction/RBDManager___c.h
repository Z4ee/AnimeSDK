#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RBDDestruction { class GroupData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RBDDESTRUCTION_RBDMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E78B940)
#define RBDDESTRUCTION_RBDMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E78B980)
#define RBDDESTRUCTION_RBDMANAGER___C__INIT_B__108_1_OFFSET UNITYSDK_OFFSET(0x1E78B990)

namespace RBDDestruction
{
	inline static constexpr unsigned int RBDManager___c_TypeDefinitionIndex = 27071;

	class RBDManager___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RBDDestruction::GroupData*, ::System::Single>** StaticGet___9__108_1()
		{
			return (::System::Func_2<::RBDDestruction::GroupData*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RBDManager___c_TypeDefinitionIndex)->GetStaticField(0x21D00);
		}
		static ::RBDDestruction::RBDManager___c** StaticGet___9()
		{
			return (::RBDDestruction::RBDManager___c**)Il2CppClass::FromTypeDefinitionIndex(RBDManager___c_TypeDefinitionIndex)->GetStaticField(0x21D08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Single _Init_b__108_1(::RBDDestruction::GroupData* g)
		{
			return ((::System::Single(*)(::PVOID, ::RBDDestruction::GroupData*))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER___C__INIT_B__108_1_OFFSET))(this, g);
		}
	};
}
