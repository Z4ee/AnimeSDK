#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/SamplePointsPatch.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGVolume; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSMATERIALGROUP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E65A130)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSMATERIALGROUP_GETLENGTHS_OFFSET UNITYSDK_OFFSET(0x1E659F10)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSMATERIALGROUP_GET_ENDVERTEX_OFFSET UNITYSDK_OFFSET(0x1E659E10)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSMATERIALGROUP_GET_STARTVERTEX_OFFSET UNITYSDK_OFFSET(0x1E659DE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSMATERIALGROUP_GET_TRIANGLECOUNT_OFFSET UNITYSDK_OFFSET(0x1E659C50)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSMATERIALGROUP_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1E659E50)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSMATERIALGROUP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E659F00)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSMATERIALGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E659E90)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int SamplePointsMaterialGroup_TypeDefinitionIndex = 38970;

	class SamplePointsMaterialGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::SamplePointsPatch>* Patches; // 0x10
		::System::Int32 MaterialID; // 0x18

		::System::Void _ctor(::System::Int32 materialID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSMATERIALGROUP__CTOR_OFFSET))(this, materialID);
		}

		::System::Void _ctor_1(::System::Int32 materialID, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::SamplePointsPatch>* patches)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::SamplePointsPatch>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSMATERIALGROUP__CTOR_1_OFFSET))(this, materialID, patches);
		}

		::System::Int32 get_TriangleCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSMATERIALGROUP_GET_TRIANGLECOUNT_OFFSET))(this);
		}

		::System::Int32 get_StartVertex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSMATERIALGROUP_GET_STARTVERTEX_OFFSET))(this);
		}

		::System::Int32 get_EndVertex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSMATERIALGROUP_GET_ENDVERTEX_OFFSET))(this);
		}

		::System::Int32 get_VertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSMATERIALGROUP_GET_VERTEXCOUNT_OFFSET))(this);
		}

		::System::Void GetLengths(::FluffyUnderware::Curvy::Generator::CGVolume* volume, ::System::Single& worldLength, ::System::Single& uLength)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGVolume*, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSMATERIALGROUP_GETLENGTHS_OFFSET))(this, volume, worldLength, uLength);
		}

		::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup* Clone()
		{
			return ((::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSMATERIALGROUP_CLONE_OFFSET))(this);
		}
	};
}
