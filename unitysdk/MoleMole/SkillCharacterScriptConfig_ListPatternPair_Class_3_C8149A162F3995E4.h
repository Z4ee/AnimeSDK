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

#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_CLASS_3_C8149A162F3995E4_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13AD1650)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_CLASS_3_C8149A162F3995E4_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13AD1660)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_CLASS_3_C8149A162F3995E4_WRITE_OFFSET UNITYSDK_OFFSET(0x13AD1730)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_CLASS_3_C8149A162F3995E4__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AD1820)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_CLASS_3_C8149A162F3995E4__CTOR_OFFSET UNITYSDK_OFFSET(0x13AD17E0)

namespace MoleMole
{
	inline static constexpr unsigned int SkillCharacterScriptConfig_ListPatternPair_Class_3_C8149A162F3995E4_TypeDefinitionIndex = 86317;

	class SkillCharacterScriptConfig_ListPatternPair_Class_3_C8149A162F3995E4 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::SkillCharacterScriptConfig_ListPatternPair*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::SkillCharacterScriptConfig_PatternPair*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::SkillCharacterScriptConfig_PatternPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_ListPatternPair_Class_3_C8149A162F3995E4_TypeDefinitionIndex)->GetStaticField(0x46E90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_CLASS_3_C8149A162F3995E4__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_CLASS_3_C8149A162F3995E4__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_CLASS_3_C8149A162F3995E4_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::SkillCharacterScriptConfig_ListPatternPair*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SkillCharacterScriptConfig_ListPatternPair*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_CLASS_3_C8149A162F3995E4_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::SkillCharacterScriptConfig_ListPatternPair*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SkillCharacterScriptConfig_ListPatternPair*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_CLASS_3_C8149A162F3995E4_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
