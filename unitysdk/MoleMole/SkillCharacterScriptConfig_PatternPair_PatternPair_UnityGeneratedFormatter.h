#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class SkillCharacterScriptConfig_PatternPair; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR_PATTERNPAIR_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x18398DB0)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR_PATTERNPAIR_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x18398DC0)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR_PATTERNPAIR_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x18398FA0)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR_PATTERNPAIR_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18399140)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR_PATTERNPAIR_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18399100)

namespace MoleMole
{
	inline static constexpr unsigned int SkillCharacterScriptConfig_PatternPair_PatternPair_UnityGeneratedFormatter_TypeDefinitionIndex = 74619;

	class SkillCharacterScriptConfig_PatternPair_PatternPair_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::SkillCharacterScriptConfig_PatternPair*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_PatternPair_PatternPair_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x469F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR_PATTERNPAIR_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR_PATTERNPAIR_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR_PATTERNPAIR_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::SkillCharacterScriptConfig_PatternPair*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SkillCharacterScriptConfig_PatternPair*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR_PATTERNPAIR_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::SkillCharacterScriptConfig_PatternPair*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SkillCharacterScriptConfig_PatternPair*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR_PATTERNPAIR_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
