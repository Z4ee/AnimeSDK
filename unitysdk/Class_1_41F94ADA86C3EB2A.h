#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Project::Config { class BabelFloorInfoTemplateExt; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_41F94ADA86C3EB2A_METHOD_1_EB63E4A7F3A036F6_OFFSET UNITYSDK_OFFSET(0x198E9E40)
#define CLASS_1_41F94ADA86C3EB2A__CTOR_OFFSET UNITYSDK_OFFSET(0x198E9D20)

inline static constexpr unsigned int Class_1_41F94ADA86C3EB2A_TypeDefinitionIndex = 12032;

class Class_1_41F94ADA86C3EB2A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Project::Config::BabelFloorInfoTemplateExt*>* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41F94ADA86C3EB2A__CTOR_OFFSET))(this);
	}

	::MoleMole::Project::Config::BabelFloorInfoTemplateExt* Method_1_EB63E4A7F3A036F6(::System::Int32 a1)
	{
		return ((::MoleMole::Project::Config::BabelFloorInfoTemplateExt*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_41F94ADA86C3EB2A_METHOD_1_EB63E4A7F3A036F6_OFFSET))(this, a1);
	}
};
