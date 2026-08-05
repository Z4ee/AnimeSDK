#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTimelineDataExtraTargetEnumMap; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_198B3CB939CED1B2_METHOD_1_0947F577F1E5AE4F_OFFSET UNITYSDK_OFFSET(0x15587020)
#define CLASS_1_198B3CB939CED1B2_METHOD_1_56A981889F7F5EB3_OFFSET UNITYSDK_OFFSET(0x155874E0)
#define CLASS_1_198B3CB939CED1B2_METHOD_1_7D817D22036FFB78_OFFSET UNITYSDK_OFFSET(0x155874F0)
#define CLASS_1_198B3CB939CED1B2_METHOD_1_8A3A62AAE5715A24_OFFSET UNITYSDK_OFFSET(0x155872D0)
#define CLASS_1_198B3CB939CED1B2_METHOD_1_8E2C129DE4FC3609_OFFSET UNITYSDK_OFFSET(0x15587110)

inline static constexpr unsigned int Class_1_198B3CB939CED1B2_TypeDefinitionIndex = 86218;

class Class_1_198B3CB939CED1B2 : public ::System::Object
{
public:
	static ::MoleMole::ConfigTimelineDataExtraTargetEnumMap** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigTimelineDataExtraTargetEnumMap**)Il2CppClass::FromTypeDefinitionIndex(Class_1_198B3CB939CED1B2_TypeDefinitionIndex)->GetStaticField(0x3DE60);
	}

	static ::System::Void Method_1_0947F577F1E5AE4F(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_198B3CB939CED1B2_METHOD_1_0947F577F1E5AE4F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_8E2C129DE4FC3609(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_198B3CB939CED1B2_METHOD_1_8E2C129DE4FC3609_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_8A3A62AAE5715A24(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_198B3CB939CED1B2_METHOD_1_8A3A62AAE5715A24_OFFSET))(a1);
	}

	static ::MoleMole::ConfigTimelineDataExtraTargetEnumMap* Method_1_56A981889F7F5EB3()
	{
		return ((::MoleMole::ConfigTimelineDataExtraTargetEnumMap*(*)())((::PBYTE)hIl2Cpp + CLASS_1_198B3CB939CED1B2_METHOD_1_56A981889F7F5EB3_OFFSET))();
	}

	static ::System::Void Method_1_7D817D22036FFB78(::MoleMole::ConfigTimelineDataExtraTargetEnumMap* a1)
	{
		return ((::System::Void(*)(::MoleMole::ConfigTimelineDataExtraTargetEnumMap*))((::PBYTE)hIl2Cpp + CLASS_1_198B3CB939CED1B2_METHOD_1_7D817D22036FFB78_OFFSET))(a1);
	}
};
