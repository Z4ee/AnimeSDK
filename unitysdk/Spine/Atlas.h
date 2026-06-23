#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class AtlasPage; }
namespace Spine { class AtlasRegion; }
namespace Spine { class TextureLoader; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class TextReader; }

#define SPINE_ATLAS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E57FB00)
#define SPINE_ATLAS_FINDREGION_OFFSET UNITYSDK_OFFSET(0x1E57F9B0)
#define SPINE_ATLAS_FLIPV_OFFSET UNITYSDK_OFFSET(0x1E57F910)
#define SPINE_ATLAS_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E57E120)
#define SPINE_ATLAS_GET_PAGES_OFFSET UNITYSDK_OFFSET(0x1E57E270)
#define SPINE_ATLAS_GET_REGIONS_OFFSET UNITYSDK_OFFSET(0x1E57E260)
#define SPINE_ATLAS_READENTRY_OFFSET UNITYSDK_OFFSET(0x1E57F670)
#define SPINE_ATLAS_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E57E1C0)
#define SPINE_ATLAS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E57E400)
#define SPINE_ATLAS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E57E280)

namespace Spine
{
	inline static constexpr unsigned int Atlas_TypeDefinitionIndex = 32846;

	class Atlas : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Spine::AtlasRegion*>* regions; // 0x10
		::System::Collections::Generic::List_1<::Spine::AtlasPage*>* pages; // 0x18
		::Spine::TextureLoader* textureLoader; // 0x20

		::System::Void _ctor(::System::Collections::Generic::List_1<::Spine::AtlasPage*>* pages, ::System::Collections::Generic::List_1<::Spine::AtlasRegion*>* regions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Spine::AtlasPage*>*, ::System::Collections::Generic::List_1<::Spine::AtlasRegion*>*))((::PBYTE)hIl2Cpp + SPINE_ATLAS__CTOR_OFFSET))(this, pages, regions);
		}

		::System::Void _ctor_1(::System::IO::TextReader* reader, ::System::String* imagesDir, ::Spine::TextureLoader* textureLoader)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextReader*, ::System::String*, ::Spine::TextureLoader*))((::PBYTE)hIl2Cpp + SPINE_ATLAS__CTOR_1_OFFSET))(this, reader, imagesDir, textureLoader);
		}

		::System::Collections::Generic::IEnumerator_1<::Spine::AtlasRegion*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Spine::AtlasRegion*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLAS_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLAS_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Spine::AtlasRegion*>* get_Regions()
		{
			return ((::System::Collections::Generic::List_1<::Spine::AtlasRegion*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLAS_GET_REGIONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Spine::AtlasPage*>* get_Pages()
		{
			return ((::System::Collections::Generic::List_1<::Spine::AtlasPage*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLAS_GET_PAGES_OFFSET))(this);
		}

		static ::System::Int32 ReadEntry(::Il2CppArray<::System::String*>* entry, ::System::String* line)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_ATLAS_READENTRY_OFFSET))(entry, line);
		}

		::System::Void FlipV()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLAS_FLIPV_OFFSET))(this);
		}

		::Spine::AtlasRegion* FindRegion(::System::String* name)
		{
			return ((::Spine::AtlasRegion*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_ATLAS_FINDREGION_OFFSET))(this, name);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLAS_DISPOSE_OFFSET))(this);
		}
	};
}
