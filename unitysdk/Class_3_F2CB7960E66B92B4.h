#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5EB97EDC6B57E120.h"
#include "unitysdk/System/Nullable_1.h"

class Class_2_BE316F2570FA4FE3;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_F2CB7960E66B92B4_METHOD_3_128774387667156B_OFFSET UNITYSDK_OFFSET(0x157623D0)
#define CLASS_3_F2CB7960E66B92B4_METHOD_3_56CD335BB2D53E2C_OFFSET UNITYSDK_OFFSET(0x15762410)
#define CLASS_3_F2CB7960E66B92B4__CTOR_OFFSET UNITYSDK_OFFSET(0x157624D0)

inline static constexpr unsigned int Class_3_F2CB7960E66B92B4_TypeDefinitionIndex = 77882;

class Class_3_F2CB7960E66B92B4 : public ::Class_2_5EB97EDC6B57E120
{
public:
	::Class_2_BE316F2570FA4FE3* HCABGOKDFJB; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* OEKDLELNKPP; // 0x30
	::System::Nullable_1<::System::Int32> HPGPKEPIBBP; // 0x38
	::System::Nullable_1<::System::Int32> OHBJMAGBEEF; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2CB7960E66B92B4__CTOR_OFFSET))(this);
	}

	static ::System::String* Method_3_128774387667156B()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_3_F2CB7960E66B92B4_METHOD_3_128774387667156B_OFFSET))();
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_3_56CD335BB2D53E2C(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_3_F2CB7960E66B92B4_METHOD_3_56CD335BB2D53E2C_OFFSET))(this, a1);
	}
};
