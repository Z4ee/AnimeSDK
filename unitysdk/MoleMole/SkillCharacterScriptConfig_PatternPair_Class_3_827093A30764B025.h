#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class SkillCharacterScriptConfig_PatternPair; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR_CLASS_3_827093A30764B025_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13AD18F0)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR_CLASS_3_827093A30764B025_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13AD1900)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR_CLASS_3_827093A30764B025_WRITE_OFFSET UNITYSDK_OFFSET(0x13AD1A90)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR_CLASS_3_827093A30764B025__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AD1BF0)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR_CLASS_3_827093A30764B025__CTOR_OFFSET UNITYSDK_OFFSET(0x13AD1BB0)

namespace MoleMole
{
	inline static constexpr unsigned int SkillCharacterScriptConfig_PatternPair_Class_3_827093A30764B025_TypeDefinitionIndex = 86319;

	class SkillCharacterScriptConfig_PatternPair_Class_3_827093A30764B025 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::SkillCharacterScriptConfig_PatternPair*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_PatternPair_Class_3_827093A30764B025_TypeDefinitionIndex)->GetStaticField(0x46EA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR_CLASS_3_827093A30764B025__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR_CLASS_3_827093A30764B025__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR_CLASS_3_827093A30764B025_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::SkillCharacterScriptConfig_PatternPair*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SkillCharacterScriptConfig_PatternPair*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR_CLASS_3_827093A30764B025_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::SkillCharacterScriptConfig_PatternPair*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SkillCharacterScriptConfig_PatternPair*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR_CLASS_3_827093A30764B025_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
