#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_89234CBEACD0293F.h"
#include "unitysdk/System/Nullable_1.h"

class Class_2_BE316F2570FA4FE3;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_F2CB7960E66B92B4_METHOD_3_128774387667156B_OFFSET UNITYSDK_OFFSET(0x9E5C770)
#define CLASS_3_F2CB7960E66B92B4_METHOD_3_56CD335BB2D53E2C_OFFSET UNITYSDK_OFFSET(0x9E5C7B0)
#define CLASS_3_F2CB7960E66B92B4__CTOR_OFFSET UNITYSDK_OFFSET(0x9E5C870)

inline static constexpr unsigned int Class_3_F2CB7960E66B92B4_TypeDefinitionIndex = 71849;

class Class_3_F2CB7960E66B92B4 : public ::Class_2_89234CBEACD0293F
{
public:
	::Class_2_BE316F2570FA4FE3* Field_3_3; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_2; // 0x30
	::System::Nullable_1<::System::Int32> Field_3_0; // 0x38
	::System::Nullable_1<::System::Int32> Field_3_1; // 0x40

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
