#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class SkillCharacterScriptConfig_ListPatternPair; }
namespace MoleMole { class SkillCharacterScriptConfig_PatternPair; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_LISTPATTERNPAIR_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x18398AC0)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_LISTPATTERNPAIR_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x18398AD0)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_LISTPATTERNPAIR_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x18398C00)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_LISTPATTERNPAIR_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18398D40)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_LISTPATTERNPAIR_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18398D00)

namespace MoleMole
{
	inline static constexpr unsigned int SkillCharacterScriptConfig_ListPatternPair_ListPatternPair_UnityGeneratedFormatter_TypeDefinitionIndex = 74617;

	class SkillCharacterScriptConfig_ListPatternPair_ListPatternPair_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::SkillCharacterScriptConfig_ListPatternPair*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::SkillCharacterScriptConfig_PatternPair*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::SkillCharacterScriptConfig_PatternPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_ListPatternPair_ListPatternPair_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x469E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_LISTPATTERNPAIR_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_LISTPATTERNPAIR_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_LISTPATTERNPAIR_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::SkillCharacterScriptConfig_ListPatternPair*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SkillCharacterScriptConfig_ListPatternPair*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_LISTPATTERNPAIR_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::SkillCharacterScriptConfig_ListPatternPair*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SkillCharacterScriptConfig_ListPatternPair*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_LISTPATTERNPAIR_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
