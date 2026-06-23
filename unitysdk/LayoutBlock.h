#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define LAYOUTBLOCK_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E854AA0)
#define LAYOUTBLOCK_CREATEBLOCKSBYPOS_OFFSET UNITYSDK_OFFSET(0x1E855060)
#define LAYOUTBLOCK_CREATEWALL_1_OFFSET UNITYSDK_OFFSET(0x1E854D30)
#define LAYOUTBLOCK_CREATEWALL_OFFSET UNITYSDK_OFFSET(0x1E854C10)
#define LAYOUTBLOCK_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1E854A90)
#define LAYOUTBLOCK_REALCREATEWALL_OFFSET UNITYSDK_OFFSET(0x1E854DA0)
#define LAYOUTBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8552B0)

inline static constexpr unsigned int LayoutBlock_TypeDefinitionIndex = 91022;

class LayoutBlock : public ::UnityEngine::MonoBehaviour
{
public:
	static ::LayoutBlock** StaticGet_instance()
	{
		return (::LayoutBlock**)Il2CppClass::FromTypeDefinitionIndex(LayoutBlock_TypeDefinitionIndex)->GetStaticField(0x4E610);
	}
	::UnityEngine::Transform* entityRoot; // 0x18
	::UnityEngine::Camera* camera; // 0x20
	::Il2CppArray<::UnityEngine::GameObject*>* blocks; // 0x28
	::UnityEngine::GameObject* head; // 0x30
	::UnityEngine::GameObject* body; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* blockList; // 0x40
	::UnityEngine::Vector4 rect; // 0x48
	::UnityEngine::Vector2 customRect; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBLOCK__CTOR_OFFSET))(this);
	}

	static ::LayoutBlock* get_Instance()
	{
		return ((::LayoutBlock*(*)())((::PBYTE)hIl2Cpp + LAYOUTBLOCK_GET_INSTANCE_OFFSET))();
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBLOCK_AWAKE_OFFSET))(this);
	}

	::System::Void CreateWall()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTBLOCK_CREATEWALL_OFFSET))(this);
	}

	::System::Void CreateWall_1(::System::Int32 width, ::System::Int32 height)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LAYOUTBLOCK_CREATEWALL_1_OFFSET))(this, width, height);
	}

	::System::Void RealCreateWall(::System::Int32 posX, ::System::Int32 posY)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LAYOUTBLOCK_REALCREATEWALL_OFFSET))(this, posX, posY);
	}

	::System::Int32 CreateBlocksByPos(::System::Int32 index, ::LayoutBlock* lb, ::System::Int32 x, ::System::Int32 z)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::LayoutBlock*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LAYOUTBLOCK_CREATEBLOCKSBYPOS_OFFSET))(this, index, lb, x, z);
	}
};
