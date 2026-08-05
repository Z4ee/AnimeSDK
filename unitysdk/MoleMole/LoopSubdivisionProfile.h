#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileBase.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"

class Class_1_480FC3B3774489BF;
namespace MoleMole { class GraphicSettingProfileContextBase; }
namespace MoleMole { class LoopSubdivisionProfileContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_LOOPSUBDIVISIONPROFILE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x19B2DBD0)
#define MOLEMOLE_LOOPSUBDIVISIONPROFILE_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x19B2DD10)
#define MOLEMOLE_LOOPSUBDIVISIONPROFILE_GETGRAPHICPROFILECONTEXTBYKEY_OFFSET UNITYSDK_OFFSET(0x19B2DAF0)
#define MOLEMOLE_LOOPSUBDIVISIONPROFILE_GETGRAPHICPROFILEPROCESSOR_OFFSET UNITYSDK_OFFSET(0x19B2DC90)
#define MOLEMOLE_LOOPSUBDIVISIONPROFILE_GET_GRAPHICPROFILETYPE_OFFSET UNITYSDK_OFFSET(0x19B2DAE0)
#define MOLEMOLE_LOOPSUBDIVISIONPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B2DE30)
#define MOLEMOLE_LOOPSUBDIVISIONPROFILE___BASE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x19B2DEC0)
#define MOLEMOLE_LOOPSUBDIVISIONPROFILE___BASE_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x19B2DF50)
#define MOLEMOLE_LOOPSUBDIVISIONPROFILE___BASE_GETGRAPHICPROFILEPROCESSOR_OFFSET UNITYSDK_OFFSET(0x19B2DFE0)

namespace MoleMole
{
	inline static constexpr unsigned int LoopSubdivisionProfile_TypeDefinitionIndex = 48463;

	class LoopSubdivisionProfile : public ::MoleMole::GraphicSettingProfileBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LoopSubdivisionProfileContext*>* GraphicProfileContextDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOOPSUBDIVISIONPROFILE__CTOR_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileType get_GraphicProfileType()
		{
			return ((::MoleMole::GraphicSettingProfileType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOOPSUBDIVISIONPROFILE_GET_GRAPHICPROFILETYPE_OFFSET))(this);
		}

		::MoleMole::LoopSubdivisionProfileContext* GetGraphicProfileContextByKey(::System::String* key)
		{
			return ((::MoleMole::LoopSubdivisionProfileContext*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_LOOPSUBDIVISIONPROFILE_GETGRAPHICPROFILECONTEXTBYKEY_OFFSET))(this, key);
		}

		::System::Boolean ContainsKey(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_LOOPSUBDIVISIONPROFILE_CONTAINSKEY_OFFSET))(this, key);
		}

		::Class_1_480FC3B3774489BF* GetGraphicProfileProcessor()
		{
			return ((::Class_1_480FC3B3774489BF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOOPSUBDIVISIONPROFILE_GETGRAPHICPROFILEPROCESSOR_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileContextBase* GetContext(::System::String* key)
		{
			return ((::MoleMole::GraphicSettingProfileContextBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_LOOPSUBDIVISIONPROFILE_GETCONTEXT_OFFSET))(this, key);
		}

		::System::Boolean __base_ContainsKey(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_LOOPSUBDIVISIONPROFILE___BASE_CONTAINSKEY_OFFSET))(this, P0);
		}

		::MoleMole::GraphicSettingProfileContextBase* __base_GetContext(::System::String* P0)
		{
			return ((::MoleMole::GraphicSettingProfileContextBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_LOOPSUBDIVISIONPROFILE___BASE_GETCONTEXT_OFFSET))(this, P0);
		}

		::Class_1_480FC3B3774489BF* __base_GetGraphicProfileProcessor()
		{
			return ((::Class_1_480FC3B3774489BF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOOPSUBDIVISIONPROFILE___BASE_GETGRAPHICPROFILEPROCESSOR_OFFSET))(this);
		}
	};
}
