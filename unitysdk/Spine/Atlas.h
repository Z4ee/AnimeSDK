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

#define SPINE_ATLAS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1604F2C0)
#define SPINE_ATLAS_FINDREGION_OFFSET UNITYSDK_OFFSET(0x1604F160)
#define SPINE_ATLAS_FLIPV_OFFSET UNITYSDK_OFFSET(0x1604F0E0)
#define SPINE_ATLAS_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1604D720)
#define SPINE_ATLAS_GET_PAGES_OFFSET UNITYSDK_OFFSET(0x1604D810)
#define SPINE_ATLAS_GET_REGIONS_OFFSET UNITYSDK_OFFSET(0x1604D800)
#define SPINE_ATLAS_READENTRY_OFFSET UNITYSDK_OFFSET(0x1604EE30)
#define SPINE_ATLAS_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1604D790)
#define SPINE_ATLAS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1604D920)
#define SPINE_ATLAS__CTOR_OFFSET UNITYSDK_OFFSET(0x1604D820)

namespace Spine
{
	inline static constexpr unsigned int Atlas_TypeDefinitionIndex = 38344;

	class Atlas : public ::System::Object
	{
	public:
		::Spine::TextureLoader* textureLoader; // 0x10
		::System::Collections::Generic::List_1<::Spine::AtlasPage*>* pages; // 0x18
		::System::Collections::Generic::List_1<::Spine::AtlasRegion*>* regions; // 0x20

		::System::Void _ctor(::System::Collections::Generic::List_1<::Spine::AtlasPage*>* a1, ::System::Collections::Generic::List_1<::Spine::AtlasRegion*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Spine::AtlasPage*>*, ::System::Collections::Generic::List_1<::Spine::AtlasRegion*>*))((::PBYTE)hIl2Cpp + SPINE_ATLAS__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::IO::TextReader* a1, ::System::String* a2, ::Spine::TextureLoader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextReader*, ::System::String*, ::Spine::TextureLoader*))((::PBYTE)hIl2Cpp + SPINE_ATLAS__CTOR_1_OFFSET))(this, a1, a2, a3);
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

		static ::System::Int32 ReadEntry(::Il2CppArray<::System::String*>* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_ATLAS_READENTRY_OFFSET))(a1, a2);
		}

		::System::Void FlipV()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLAS_FLIPV_OFFSET))(this);
		}

		::Spine::AtlasRegion* FindRegion(::System::String* a1)
		{
			return ((::Spine::AtlasRegion*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_ATLAS_FINDREGION_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLAS_DISPOSE_OFFSET))(this);
		}
	};
}
