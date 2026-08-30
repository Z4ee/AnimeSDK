#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }

#define STRUCT_2_3906C24C646CC83F_STRUCT_2_61B2D5BFFD1FA8C1_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B90FC0)
#define STRUCT_2_3906C24C646CC83F_STRUCT_2_61B2D5BFFD1FA8C1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B90FE0)

inline static constexpr unsigned int Struct_2_3906C24C646CC83F_Struct_2_61B2D5BFFD1FA8C1_TypeDefinitionIndex = 6528;

struct alignas(8) Struct_2_3906C24C646CC83F_Struct_2_61B2D5BFFD1FA8C1
{
	::System::Boolean HOGICPACECN; // 0x10
	::System::SByte MJMHAEKELII; // 0x10
	::System::Byte CEKPPFDAKNP; // 0x10
	::System::Char EHDGBALHHEF; // 0x10
	::System::Int16 HILDDAPBOFF; // 0x10
	::System::UInt16 ALEDPHNAOKN; // 0x10
	::System::Int32 PFGLFOAIFCH; // 0x10
	::System::UInt32 MJPALIMBHFK; // 0x10
	::System::Int64 LCAAPLIOBON; // 0x10
	::System::UInt64 PMDKNFNIFKA; // 0x10
	::System::Single LFDCHJLKHBO; // 0x10
	::System::Double LOABAABNLBP; // 0x10
	::UnityEngine::Vector2 CGBJFLPDNAF; // 0x10
	::UnityEngine::Vector3 HGHGKGHKFNE; // 0x10
	::UnityEngine::Vector4 MMIFIBPICCI; // 0x10
	::UnityEngine::Quaternion NPAEFOFGGIE; // 0x10
	::UnityEngine::Color MIHFKBPAFGE; // 0x10
	::UnityEngine::Color32 DCIDADFJMLM; // 0x10

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_3906C24C646CC83F_STRUCT_2_61B2D5BFFD1FA8C1_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3906C24C646CC83F_STRUCT_2_61B2D5BFFD1FA8C1_GETHASHCODE_OFFSET))(this);
	}
};
